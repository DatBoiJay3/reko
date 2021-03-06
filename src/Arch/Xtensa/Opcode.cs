﻿#region License
/* 
 * Copyright (C) 1999-2018 John Källén.
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

namespace Reko.Arch.Xtensa
{
    public enum Opcodes
    {
        reserved = -2,
        invalid = -1,

        abs,
        add_n,
        addi,
        addi_n,
        addmi,
        add,
        addx2,
        addx4,
        addx8,
        and,
        andb,
        andbc,
        ball,
        bany,
        bbc,
        bbci,
        bbs,
        bbsi,
        beq,
        beqi,
        beqz,
        beqz_n,
        bge,
        bgei,
        bgeu,
        bgeui,
        bgez,
        blt,
        blti, 
        bltu,
        bltui,
        bltz,
        bnall,
        bne,
        bnei,
        bnez,
        bnez_n,
        bnone,
        @break,
        call0,
        call4,
        call8,
        call12,
        callx0,
        callx4,
        callx8,
        callx12,
        cust0,
        cust1,
        extui,
        ill,
        isync,
        j,
        jx,
        l16si,
        l16ui,
        l32e,
        l32i,
        l32i_n,
        l32r,
        l8ui,
        ldpte,
        lsiu,
        lsx,
        max,
        maxu,
        memw,
        min,
        minu,
        mov_n,
        moveqz,
        movi,
        movi_n,
        movgez,
        movltz,
        movnez,
        mul16s,
        mul16u,
        mull,
        neg,
        nsa,
        nsau,
        or,
        orb,
        orbc,
        quos,
        quou,
        rems,
        remu,
        ret,
        ret_n,
        rfe,
        rfi,
        rsil,
        rsr,
        s16i,
        s32e,
        s32i,
        s32i_n,
        s32ri,
        s8i,
        sll,
        slli,
        sra,
        srai,
        src,
        srl,
        srli,
        ssai,
        ssa8l,
        ssi,
        ssl,
        ssr,
        sub,
        subx2,
        subx4,
        subx8,
        wsr,
        xor,
        xorb,

        add_s,
        floor_s,
        moveqz_s,
        mul_s,
        sub_s,
        ueq_s,
    }
}