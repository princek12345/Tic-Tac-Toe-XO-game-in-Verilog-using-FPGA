/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4248U);
    t4 = *((char **)t2);
    t2 = (t0 + 4088U);
    t5 = *((char **)t2);
    t2 = (t0 + 3928U);
    t6 = *((char **)t2);
    t2 = (t0 + 3768U);
    t7 = *((char **)t2);
    t2 = (t0 + 3608U);
    t8 = *((char **)t2);
    t2 = (t0 + 3448U);
    t9 = *((char **)t2);
    t2 = (t0 + 3288U);
    t10 = *((char **)t2);
    t2 = (t0 + 3128U);
    t11 = *((char **)t2);
    t2 = (t0 + 2968U);
    t12 = *((char **)t2);
    xsi_vlogtype_concat(t3, 18, 18, 9U, t12, 2, t11, 2, t10, 2, t9, 2, t8, 2, t7, 2, t6, 2, t5, 2, t4, 2);
    t2 = (t0 + 7888);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 262143U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t2, 0, 17);
    t25 = (t0 + 7808);
    *((int *)t25) = 1;

LAB1:    return;
}


extern void work_m_00000000003290201633_0286164271_init()
{
	static char *pe[] = {(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003290201633_0286164271", "isim/main_tb_isim_beh.exe.sim/work/m_00000000003290201633_0286164271.didat");
	xsi_register_executes(pe);
}
