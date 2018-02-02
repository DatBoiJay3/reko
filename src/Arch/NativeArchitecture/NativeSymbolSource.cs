﻿using Reko.Core.NativeInterface.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Core.NativeInterface
{
	public class NativeSymbolSource : ISymbolSource
	{
		private IntPtr handle;
		private NativeSymbolSourceProvider prv;
		private readonly ILibraryLoader loader;

		private const string SYM_NAME = "gSymProvider";

		public NativeSymbolSource(string libPath, ILibraryLoader ldr)
		{
			loader = ldr;
			handle = loader.LoadLibrary(libPath);

			IntPtr gSymProvider = loader.GetSymbol(handle, SYM_NAME);
			prv = (NativeSymbolSourceProvider)Marshal.PtrToStructure(gSymProvider, typeof(NativeSymbolSourceProvider));
		}

		public bool CanLoad(string filename, byte[] fileContents)
		{
			return false;
		}

		public void Dispose()
		{
			prv.Dispose();
		}

		public List<ImageSymbol> GetAllSymbols()
		{
			//TODO: ask if number of symbols is available and preallocate list
			List<ImageSymbol> symbols = new List<ImageSymbol>();

			IntPtr syms = prv.GetSymbols();
			IntPtr sym;
			for(int off=0; ; off += Marshal.SizeOf(sym)) {
				sym = Marshal.ReadIntPtr(syms, off);
				if (sym == IntPtr.Zero)
					break;

				ulong start = prv.GetSymbolStart(sym);
				ulong end = prv.GetSymbolEnd(sym);

				symbols.Add(new ImageSymbol(new Address32((uint)start)) {
					Size = (uint)(end - start),
					Name = prv.GetSymbolName(sym)
				});
			}

			return symbols;
		}
	}
}
