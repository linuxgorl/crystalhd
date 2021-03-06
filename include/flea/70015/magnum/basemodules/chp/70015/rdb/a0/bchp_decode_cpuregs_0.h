/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_decode_cpuregs_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:02p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:23 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_decode_cpuregs_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:02p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_DECODE_CPUREGS_0_H__
#define BCHP_DECODE_CPUREGS_0_H__

/***************************************************************************
 *DECODE_CPUREGS_0 - Inner Loop CPU Registers 0
 ***************************************************************************/
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_MBX    0x00800f00 /* Host 2 CPU mailbox register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_MBX    0x00800f04 /* CPU to Host mailbox register */
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT       0x00800f08 /* Mailbox status flags */
#define BCHP_DECODE_CPUREGS_0_REG_INST_BASE      0x00800f0c /* Instruction base address register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA    0x00800f10 /* CPU interrupt enable */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT   0x00800f14 /* CPU interrupt status */
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_STAT   0x00800f18 /* Host to CPU status register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_STAT   0x00800f1c /* CPU to Host status register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET 0x00800f20 /* CPU interrupt set register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR 0x00800f24 /* CPU interrupt clear register */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_ICACHE_MISS 0x00800f28 /* Instruction cache miss counter */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK 0x00800f2c /* CPU interrupt mask register */
#define BCHP_DECODE_CPUREGS_0_REG_END_OF_CODE    0x00800f34 /* End of code register */
#define BCHP_DECODE_CPUREGS_0_REG_GLOBAL_IO_BASE 0x00800f38 /* Global IO base register */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_WR 0x00800f3c /* CPU debug trace fifo write */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_RD 0x00800f40 /* CPU debug trace fifo read */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL 0x00800f44 /* CPU debug trace fifo control */
#define BCHP_DECODE_CPUREGS_0_REG_WATCHDOG_TMR   0x00800f4c /* Watchdog timer register */
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS   0x00800f50 /* SDRAM Status register */
#define BCHP_DECODE_CPUREGS_0_REG_CPUREGS_END    0x00800f7c /* Dummy end */

/***************************************************************************
 *REG_HST2CPU_MBX - Host 2 CPU mailbox register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_HST2CPU_MBX :: Value [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_MBX_Value_MASK           0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_MBX_Value_SHIFT          0

/***************************************************************************
 *REG_CPU2HST_MBX - CPU to Host mailbox register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU2HST_MBX :: Value [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_MBX_Value_MASK           0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_MBX_Value_SHIFT          0

/***************************************************************************
 *REG_MBX_STAT - Mailbox status flags
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_MBX_STAT :: reserved0 [31:02] */
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_reserved0_MASK          0xfffffffc
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_reserved0_SHIFT         2

/* DECODE_CPUREGS_0 :: REG_MBX_STAT :: C2H [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_C2H_MASK                0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_C2H_SHIFT               1

/* DECODE_CPUREGS_0 :: REG_MBX_STAT :: H2C [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_H2C_MASK                0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_MBX_STAT_H2C_SHIFT               0

/***************************************************************************
 *REG_INST_BASE - Instruction base address register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_INST_BASE :: InstBase [31:10] */
#define BCHP_DECODE_CPUREGS_0_REG_INST_BASE_InstBase_MASK          0xfffffc00
#define BCHP_DECODE_CPUREGS_0_REG_INST_BASE_InstBase_SHIFT         10

/* DECODE_CPUREGS_0 :: REG_INST_BASE :: reserved0 [09:00] */
#define BCHP_DECODE_CPUREGS_0_REG_INST_BASE_reserved0_MASK         0x000003ff
#define BCHP_DECODE_CPUREGS_0_REG_INST_BASE_reserved0_SHIFT        0

/***************************************************************************
 *REG_CPU_INT_ENA - CPU interrupt enable
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: MBx [31:31] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_MBx_MASK             0x80000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_MBx_SHIFT            31

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: reserved_for_eco0 [30:11] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_reserved_for_eco0_MASK 0x7ffff800
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_reserved_for_eco0_SHIFT 11

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: Watchdog [10:10] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_Watchdog_MASK        0x00000400
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_Watchdog_SHIFT       10

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: CAB [09:09] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_CAB_MASK             0x00000200
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_CAB_SHIFT            9

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: SI [08:08] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_SI_MASK              0x00000100
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_SI_SHIFT             8

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: reserved_for_eco1 [07:02] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_reserved_for_eco1_MASK 0x000000fc
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_reserved_for_eco1_SHIFT 2

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: RB [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_RB_MASK              0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_RB_SHIFT             1

/* DECODE_CPUREGS_0 :: REG_CPU_INT_ENA :: SD [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_SD_MASK              0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_ENA_SD_SHIFT             0

/***************************************************************************
 *REG_CPU_INT_STAT - CPU interrupt status
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: MBx [31:31] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_MBx_MASK            0x80000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_MBx_SHIFT           31

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: reserved0 [30:11] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_reserved0_MASK      0x7ffff800
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_reserved0_SHIFT     11

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: Watchdog [10:10] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_Watchdog_MASK       0x00000400
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_Watchdog_SHIFT      10

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: CAB [09:09] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_CAB_MASK            0x00000200
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_CAB_SHIFT           9

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: SI [08:08] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_SI_MASK             0x00000100
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_SI_SHIFT            8

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: reserved1 [07:02] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_reserved1_MASK      0x000000fc
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_reserved1_SHIFT     2

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: RB [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_RB_MASK             0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_RB_SHIFT            1

/* DECODE_CPUREGS_0 :: REG_CPU_INT_STAT :: SD [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_SD_MASK             0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INT_STAT_SD_SHIFT            0

/***************************************************************************
 *REG_HST2CPU_STAT - Host to CPU status register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_HST2CPU_STAT :: Value [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_STAT_Value_MASK          0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_HST2CPU_STAT_Value_SHIFT         0

/***************************************************************************
 *REG_CPU2HST_STAT - CPU to Host status register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU2HST_STAT :: Value [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_STAT_Value_MASK          0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_CPU2HST_STAT_Value_SHIFT         0

/***************************************************************************
 *REG_CPU_INTGEN_SET - CPU interrupt set register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: reserved0 [31:16] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_reserved0_MASK    0xffff0000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_reserved0_SHIFT   16

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_15 [15:15] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_15_MASK       0x00008000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_15_SHIFT      15

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_14 [14:14] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_14_MASK       0x00004000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_14_SHIFT      14

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_13 [13:13] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_13_MASK       0x00002000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_13_SHIFT      13

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_12 [12:12] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_12_MASK       0x00001000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_12_SHIFT      12

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_11 [11:11] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_11_MASK       0x00000800
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_11_SHIFT      11

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_10 [10:10] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_10_MASK       0x00000400
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_10_SHIFT      10

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_9 [09:09] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_9_MASK        0x00000200
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_9_SHIFT       9

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_8 [08:08] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_8_MASK        0x00000100
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_8_SHIFT       8

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_7 [07:07] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_7_MASK        0x00000080
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_7_SHIFT       7

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_6 [06:06] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_6_MASK        0x00000040
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_6_SHIFT       6

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_5 [05:05] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_5_MASK        0x00000020
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_5_SHIFT       5

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_4 [04:04] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_4_MASK        0x00000010
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_4_SHIFT       4

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_3 [03:03] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_3_MASK        0x00000008
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_3_SHIFT       3

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_2 [02:02] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_2_MASK        0x00000004
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_2_SHIFT       2

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_1 [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_1_MASK        0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_1_SHIFT       1

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_SET :: Int_0 [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_0_MASK        0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_SET_Int_0_SHIFT       0

/***************************************************************************
 *REG_CPU_INTGEN_CLR - CPU interrupt clear register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: CPU_2_Hst_MBx [31:31] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_CPU_2_Hst_MBx_MASK 0x80000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_CPU_2_Hst_MBx_SHIFT 31

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Watchdog_Timer [30:30] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Watchdog_Timer_MASK 0x40000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Watchdog_Timer_SHIFT 30

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: reserved0 [29:16] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_reserved0_MASK    0x3fff0000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_reserved0_SHIFT   16

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_15 [15:15] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_15_MASK       0x00008000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_15_SHIFT      15

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_14 [14:14] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_14_MASK       0x00004000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_14_SHIFT      14

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_13 [13:13] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_13_MASK       0x00002000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_13_SHIFT      13

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_12 [12:12] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_12_MASK       0x00001000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_12_SHIFT      12

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_11 [11:11] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_11_MASK       0x00000800
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_11_SHIFT      11

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_10 [10:10] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_10_MASK       0x00000400
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_10_SHIFT      10

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_9 [09:09] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_9_MASK        0x00000200
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_9_SHIFT       9

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_8 [08:08] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_8_MASK        0x00000100
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_8_SHIFT       8

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_7 [07:07] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_7_MASK        0x00000080
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_7_SHIFT       7

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_6 [06:06] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_6_MASK        0x00000040
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_6_SHIFT       6

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_5 [05:05] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_5_MASK        0x00000020
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_5_SHIFT       5

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_4 [04:04] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_4_MASK        0x00000010
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_4_SHIFT       4

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_3 [03:03] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_3_MASK        0x00000008
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_3_SHIFT       3

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_2 [02:02] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_2_MASK        0x00000004
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_2_SHIFT       2

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_1 [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_1_MASK        0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_1_SHIFT       1

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_CLR :: Int_0 [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_0_MASK        0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_CLR_Int_0_SHIFT       0

/***************************************************************************
 *REG_CPU_ICACHE_MISS - Instruction cache miss counter
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_ICACHE_MISS :: Count [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_ICACHE_MISS_Count_MASK       0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_CPU_ICACHE_MISS_Count_SHIFT      0

/***************************************************************************
 *REG_CPU_INTGEN_MASK - CPU interrupt mask register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: CPU_2_Hst_MBx [31:31] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_CPU_2_Hst_MBx_MASK 0x80000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_CPU_2_Hst_MBx_SHIFT 31

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Watchdog_Timer [30:30] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Watchdog_Timer_MASK 0x40000000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Watchdog_Timer_SHIFT 30

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: reserved0 [29:16] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_reserved0_MASK   0x3fff0000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_reserved0_SHIFT  16

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_15 [15:15] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_15_MASK      0x00008000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_15_SHIFT     15

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_14 [14:14] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_14_MASK      0x00004000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_14_SHIFT     14

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_13 [13:13] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_13_MASK      0x00002000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_13_SHIFT     13

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_12 [12:12] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_12_MASK      0x00001000
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_12_SHIFT     12

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_11 [11:11] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_11_MASK      0x00000800
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_11_SHIFT     11

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_10 [10:10] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_10_MASK      0x00000400
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_10_SHIFT     10

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_9 [09:09] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_9_MASK       0x00000200
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_9_SHIFT      9

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_8 [08:08] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_8_MASK       0x00000100
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_8_SHIFT      8

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_7 [07:07] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_7_MASK       0x00000080
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_7_SHIFT      7

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_6 [06:06] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_6_MASK       0x00000040
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_6_SHIFT      6

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_5 [05:05] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_5_MASK       0x00000020
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_5_SHIFT      5

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_4 [04:04] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_4_MASK       0x00000010
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_4_SHIFT      4

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_3 [03:03] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_3_MASK       0x00000008
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_3_SHIFT      3

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_2 [02:02] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_2_MASK       0x00000004
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_2_SHIFT      2

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_1 [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_1_MASK       0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_1_SHIFT      1

/* DECODE_CPUREGS_0 :: REG_CPU_INTGEN_MASK :: Int_0 [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_0_MASK       0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_CPU_INTGEN_MASK_Int_0_SHIFT      0

/***************************************************************************
 *REG_END_OF_CODE - End of code register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_END_OF_CODE :: EndOfCode [31:10] */
#define BCHP_DECODE_CPUREGS_0_REG_END_OF_CODE_EndOfCode_MASK       0xfffffc00
#define BCHP_DECODE_CPUREGS_0_REG_END_OF_CODE_EndOfCode_SHIFT      10

/* DECODE_CPUREGS_0 :: REG_END_OF_CODE :: reserved0 [09:00] */
#define BCHP_DECODE_CPUREGS_0_REG_END_OF_CODE_reserved0_MASK       0x000003ff
#define BCHP_DECODE_CPUREGS_0_REG_END_OF_CODE_reserved0_SHIFT      0

/***************************************************************************
 *REG_GLOBAL_IO_BASE - Global IO base register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_GLOBAL_IO_BASE :: GlobalIOBase [31:10] */
#define BCHP_DECODE_CPUREGS_0_REG_GLOBAL_IO_BASE_GlobalIOBase_MASK 0xfffffc00
#define BCHP_DECODE_CPUREGS_0_REG_GLOBAL_IO_BASE_GlobalIOBase_SHIFT 10

/* DECODE_CPUREGS_0 :: REG_GLOBAL_IO_BASE :: reserved0 [09:00] */
#define BCHP_DECODE_CPUREGS_0_REG_GLOBAL_IO_BASE_reserved0_MASK    0x000003ff
#define BCHP_DECODE_CPUREGS_0_REG_GLOBAL_IO_BASE_reserved0_SHIFT   0

/***************************************************************************
 *REG_DEBUG_TRACE_FIFO_WR - CPU debug trace fifo write
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_WR :: reserved0 [31:08] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_WR_reserved0_MASK 0xffffff00
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_WR_reserved0_SHIFT 8

/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_WR :: Value [07:00] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_WR_Value_MASK   0x000000ff
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_WR_Value_SHIFT  0

/***************************************************************************
 *REG_DEBUG_TRACE_FIFO_RD - CPU debug trace fifo read
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_RD :: reserved0 [31:08] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_RD_reserved0_MASK 0xffffff00
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_RD_reserved0_SHIFT 8

/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_RD :: Value [07:00] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_RD_Value_MASK   0x000000ff
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_RD_Value_SHIFT  0

/***************************************************************************
 *REG_DEBUG_TRACE_FIFO_CTL - CPU debug trace fifo control
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_CTL :: reserved0 [31:03] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_reserved0_MASK 0xfffffff8
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_reserved0_SHIFT 3

/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_CTL :: Freeze [02:02] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Freeze_MASK 0x00000004
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Freeze_SHIFT 2

/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_CTL :: Start_read [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Start_read_MASK 0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Start_read_SHIFT 1

/* DECODE_CPUREGS_0 :: REG_DEBUG_TRACE_FIFO_CTL :: Clear [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Clear_MASK  0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_DEBUG_TRACE_FIFO_CTL_Clear_SHIFT 0

/***************************************************************************
 *REG_WATCHDOG_TMR - Watchdog timer register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_WATCHDOG_TMR :: Value [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_WATCHDOG_TMR_Value_MASK          0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_WATCHDOG_TMR_Value_SHIFT         0

/***************************************************************************
 *REG_SDRAM_STATUS - SDRAM Status register
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_SDRAM_STATUS :: reserved0 [31:02] */
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_reserved0_MASK      0xfffffffc
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_reserved0_SHIFT     2

/* DECODE_CPUREGS_0 :: REG_SDRAM_STATUS :: IsWrite [01:01] */
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_IsWrite_MASK        0x00000002
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_IsWrite_SHIFT       1

/* DECODE_CPUREGS_0 :: REG_SDRAM_STATUS :: Busy [00:00] */
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_Busy_MASK           0x00000001
#define BCHP_DECODE_CPUREGS_0_REG_SDRAM_STATUS_Busy_SHIFT          0

/***************************************************************************
 *REG_CPUREGS_END - Dummy end
 ***************************************************************************/
/* DECODE_CPUREGS_0 :: REG_CPUREGS_END :: reserved0 [31:00] */
#define BCHP_DECODE_CPUREGS_0_REG_CPUREGS_END_reserved0_MASK       0xffffffff
#define BCHP_DECODE_CPUREGS_0_REG_CPUREGS_END_reserved0_SHIFT      0

#endif /* #ifndef BCHP_DECODE_CPUREGS_0_H__ */

/* End of File */
