#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
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

using System;
using System.Collections.Generic;
using System.Text;

namespace Reko.Arch.PowerPC
{
    public enum Opcode : ushort
    {
        illegal,

        add,
        addc,
        adde,
        addco,
        addi,
        addic,
        addis,
        addme,
        addze,
        and,
        andc,
        andi,
        andis,
        b,
        bc,
        bcl,
        bclr,
        bclrl,
        bcctr,
        bctrl,
        bdnz,
        bdnzf,
        bdnzfl,
        bdnzl,
        bdnzt,
        bdnztl,
        bdz,
        bdzf,
        bdzfl,
        bdzl,
        bdzt,
        bdztl,
        beq,
        beql,
        beqlr,
        beqlrl,
        bge,
        bgel,
        bgelr,
        bgelrl,
        bgt,
        bgtl,
        bgtlr,
        bgtlrl,
        bl,
        ble,
        blel,
        blelr,
        blelrl,
        blr,
        blrl,
        blt,
        bltl,
        bltlr,
        bltlrl,
        bne,
        bnel,
        bnelr,
        bnelrl,
        bns,
        bnsl,
        bnslr,
        bnslrl,
        bso,
        bsol,
        bsolr,
        bsolrl,
        cmp,
        cmpi,
        cmpl,
        cmpli,
        cmplw,
        cmplwi,
        cmpwi,
        cntlzw,
        cntlzd,
        creqv,
        crnor,
        cror,
        crxor,
        dcbt,
        divw,
        divwu,
        extsb,
        extsh,
        extsw,
        fabs,
        fadd,
        fadds,
        fcmpo,
        fcmpu,
        fcfid,
        fctid,
        fctidz,
        fctiw,
        fctiwz,
        fdiv,
        fdivs,
        fmadd,
        fmadds,
        fmr,
        fmsub,
        fmsubs,
        fmul,
        fmuls,
        fnabs,
        fnmadd,
        fnmadds,
        fnmsub,
        fnmsubs,
        fneg,
        fres,
        frsp,
        frsqrte,
        fsel,
        fsub,
        fsubs,
        fsqrt,
        fsqrts,
        isync,
        lbz,
        lbzu,
        lbzux,
        lbzx,
        ld,
        ldu,
        lfd,
        lfdu,
        lfs,
        lfsu,
        lfsx,
        lha,
        lhau,
        lhaux,
        lhz,
        lhzu,
        lhzx,
        lmw,
        lvewx,
        lvlx,
        lvsl,
        lvx,
        lwarx,
        lwbrx,
        lwzu,
        lwz,
        lwzx,
        mcrf,
        mfcr,
        mfctr,
        mftb,
        mffs,
        mflr,
        mfmsr,
        mfspr,
        mtcrf,
        mtctr,
        mtfsf,
        mtlr,
        mtmsr,
        mtspr,
        mulld,
        mulli,
        mullw,
        mulhw,
        mulhwu,
        nand,
        neg,
        nor,
        or,
        orc,
        ori,
        oris,
        rfi,
        rldicl,
        rldicr,
        rlwimi,
        rlwinm,
        rlwnm,
        sc,
        sld,
        slw,
        srad,
        sradi,
        sraw,
        srawi,
        srd,
        srw,
        stb,
        stbu,
        stbux,
        stbx,
        std,
        stdu,
        stdx,
        stfd,
        stfdu,
        stfiwx,
        stfs,
        stfsu,
        sth,
        sthu,
        sthx,
        stmw,
        stvewx,
        stvx,
        stw,
        stwbrx,
        stwu,
        stwux,
        stwx,
        subf,
        subfc,
        subfe,
        subfic,
        subfze,
        sync,
        tw,
        twi,
        vadduwm,
        vaddfp,
        vand,
        vandc,
        vcfsx,
        vcmpeqfp,
        vcmpequw,
        vcmpgtfp,
        vcmpgtuw,
        vctsxs,
        vmaddfp,
        vnmsubfp,
        vmrghw,
        vmrglw,
        vperm,
        vrefp,
        vrsqrtefp,
        vsel,
        vsldoi,
        vslw,
        vspltisw,
        vspltw,
        vsubfp,
        vxor,
        xor,
        xori,
        xoris,
    }
}
