#region License
/* 
 * Copyright (C) 1999-2016 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Analysis;
using Reko.Core.Code;
using Reko.Core.Types;
using Reko.UnitTests.Mocks;
using NUnit.Framework;
using System;
using System.IO;

namespace Reko.UnitTests.Analysis
{
	[TestFixture]
	public class CoalescerTests : AnalysisTestBase
	{
		[Test]
		public void Coa3Converge()
		{
			RunFileTest("Fragments/3converge.asm", "Analysis/Coa3Converge.txt");
		}

		[Test]
		public void CoaAsciiHex()
		{
			RunFileTest("Fragments/ascii_hex.asm", "Analysis/CoaAsciiHex.txt");
		}

		[Test]
		public void CoaDataConstraint()
		{
			RunFileTest("Fragments/data_constraint.asm", "Analysis/CoaDataConstraint.txt");
		}

		[Test]
		public void CoaMoveChain()
		{
			RunFileTest("Fragments/move_sequence.asm", "Analysis/CoaMoveChain.txt");
		}

		[Test]
		public void CoaFactorialReg()
		{
			RunFileTest("Fragments/factorial_reg.asm", "Analysis/CoaFactorialReg.txt");
		}

		[Test]
		public void CoaMemoryTest()
		{
			RunFileTest("Fragments/simple_memoperations.asm", "Analysis/CoaMemoryTest.txt");
		}

		[Test]
		public void CoaSmallLoop()
		{
			RunFileTest("Fragments/small_loop.asm", "Analysis/CoaSmallLoop.txt");
		}

		[Test]
        [Ignore("scanning-development")]
        public void CoaAddSubCarries()
		{
			RunFileTest("Fragments/addsubcarries.asm", "Analysis/CoaAddSubCarries.txt");
		}

		[Test]
		public void CoaConditionals()
		{
			RunFileTest("Fragments/multiple/conditionals.asm", "Analysis/CoaConditionals.txt");
		}

		[Test]
		public void CoaSliceReturn()
		{
			RunFileTest("Fragments/multiple/slicereturn.asm", "Analysis/CoaSliceReturn.txt");
		}

		[Test]
		public void CoaReg00002()
		{
			RunFileTest("Fragments/regression00002.asm", "Analysis/CoaReg00002.txt");
		}

		[Test]
		public void CoaWhileGoto()
		{
			RunFileTest("Fragments/while_goto.asm", "Analysis/CoaWhileGoto.txt");
		}

        [Test]
        public void CoaSideEffectCalls()
        {
            RunFileTest("Fragments/multiple/sideeffectcalls.asm", "Analysis/CoaSideEffectCalls.txt");
        }

		protected override void RunTest(Program prog, TextWriter fut)
		{
            IImportResolver importResolver = null;
			DataFlowAnalysis dfa = new DataFlowAnalysis(prog, importResolver, new FakeDecompilerEventListener());
			dfa.UntangleProcedures();
			
			foreach (Procedure proc in prog.Procedures.Values)
			{
				Aliases alias = new Aliases(proc, prog.Architecture);
				alias.Transform();
				SsaTransform sst = new SsaTransform(dfa.ProgramDataFlow, proc, importResolver, proc.CreateBlockDominatorGraph());
				SsaState ssa = sst.SsaState;
				
                ConditionCodeEliminator cce = new ConditionCodeEliminator(ssa, prog.Platform);
				cce.Transform();
				DeadCode.Eliminate(proc, ssa);

				ValuePropagator vp = new ValuePropagator(prog.Architecture, ssa.Identifiers, proc);
				vp.Transform();
				DeadCode.Eliminate(proc, ssa);
				Coalescer co = new Coalescer(proc, ssa);
				co.Transform();

				ssa.Write(fut);
				proc.Write(false, fut);
				fut.WriteLine();
			}
		}
	}
}
