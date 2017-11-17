﻿#region License
/* 
 * Copyright (C) 1999-2017 John Källén.
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

using NUnit.Framework;
using Reko.Core;
using Reko.Environments.MacOS;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.UnitTests.Environments.MacOS
{
    class MacsBugSymbolScannerTests
    {
        private BeImageWriter w;

        [SetUp]
        public void Setup()
        {
            this.w = new BeImageWriter();
        }

        private void Given_Link(int amount)
        {
            // Emit a LINK instruction reservice `amount` bytes of space.
            w.WriteBeUInt16(MacsBugSymbolScanner.LINK);
            w.WriteBeUInt16((ushort)amount);
        }

        private void Given_Body(int instrs)
        {
            for (int i = 0; i < instrs; ++i)
            {
                const ushort NOP = 0x4E71;
                w.WriteBeUInt16(NOP);
            }
        }

        private void Given_Rts()
        {
            w.WriteBeUInt16(MacsBugSymbolScanner.RTS);
        }

        private void Given_Rtd(int n)
        {
            w.WriteBeUInt16(MacsBugSymbolScanner.RTD);
            w.WriteBeUInt16((ushort)n);
        }

        private void Given_Variable_Length_Symbol(string str)
        {
            var ab = Encoding.ASCII.GetBytes(str);
            if (ab.Length < 0x20)
            {
                w.WriteByte((byte)(0x80 + ab.Length));
            }
            else
            {
                w.WriteByte(0x80);
                w.WriteByte((byte)ab.Length);
            }
            w.WriteBytes(ab);
            if ((w.Position & 1) == 1)
                w.WriteByte(0x00);
        }

        private void Given_ProgramData(int count)
        {
            w.WriteBeUInt16((ushort)count);
            while (count > 0)
            {
                w.WriteByte((byte)count);
            }
            if ((w.Position & 1) == 1)
                w.WriteByte(0x00);
        }


        [Test]
        public void MacsBug_ScanProcedures()
        {
            Given_Link(4);
            Given_Body(3);
            Given_Rts();
            Given_Variable_Length_Symbol("my_printf");
            Given_ProgramData(0);

            var mem = new MemoryArea(Address.Ptr32(0x00100000), w.ToArray());
            var scan = new MacsBugSymbolScanner(mem);
            var symbols = scan.ScanForSymbols();

            Assert.AreEqual(1, symbols.Count);
            var sym = symbols[0];
            Assert.AreEqual(SymbolType.Procedure, sym.Type);
            Assert.AreEqual("my_printf", sym.Name);
            Assert.AreEqual(Address.Ptr32(0x00100000), sym.Address);
        }
    }
}