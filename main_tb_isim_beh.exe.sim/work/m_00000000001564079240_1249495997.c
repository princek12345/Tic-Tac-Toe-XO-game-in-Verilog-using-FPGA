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
static const char *ng0 = "D:/IIST Education/4th Semester/Digital & VLSI - Lab/Project/Tic-toc-toe/tic_toc_toe/fsm_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};



static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4920);
    *((int *)t2) = 1;
    t3 = (t0 + 4384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_50_1(char *t0)
{
    char t11[8];
    char t27[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4936);
    *((int *)t2) = 1;
    t3 = (t0 + 4632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(53, ng0);

LAB18:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 1752U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB22;

LAB19:    if (t23 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t11) = 1;

LAB22:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) != 0)
        goto LAB25;

LAB26:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB27;

LAB28:    memcpy(t65, t27, 8);

LAB29:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB43:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(61, ng0);

LAB44:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB48;

LAB45:    if (t23 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t11) = 1;

LAB48:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB51:    goto LAB17;

LAB11:    xsi_set_current_line(69, ng0);

LAB52:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB56;

LAB53:    if (t23 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t11) = 1;

LAB56:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB64;

LAB61:    if (t23 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t11) = 1;

LAB64:    memset(t27, 0, 8);
    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t9) != 0)
        goto LAB67;

LAB68:    t12 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t12);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB69;

LAB70:    memcpy(t65, t27, 8);

LAB71:    t69 = (t65 + 4);
    t98 = *((unsigned int *)t69);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB90;

LAB87:    if (t23 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t11) = 1;

LAB90:    memset(t27, 0, 8);
    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t9) != 0)
        goto LAB93;

LAB94:    t12 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t12);
    t44 = (t37 || t38);
    if (t44 > 0)
        goto LAB95;

LAB96:    memcpy(t65, t27, 8);

LAB97:    t69 = (t65 + 4);
    t94 = *((unsigned int *)t69);
    t95 = (~(t94));
    t96 = *((unsigned int *)t65);
    t98 = (t96 & t95);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB109;

LAB110:
LAB111:
LAB85:
LAB59:    goto LAB17;

LAB13:    xsi_set_current_line(86, ng0);

LAB113:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB117;

LAB114:    if (t23 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t11) = 1;

LAB117:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB120:    goto LAB17;

LAB21:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t27) = 1;
    goto LAB26;

LAB25:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB26;

LAB27:    t39 = (t0 + 1912U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng2)));
    memset(t41, 0, 8);
    t42 = (t40 + 4);
    t43 = (t39 + 4);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB33;

LAB30:    if (t53 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t41) = 1;

LAB33:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t58) != 0)
        goto LAB36;

LAB37:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t27 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t57) = 1;
    goto LAB37;

LAB36:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB37;

LAB38:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t27 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB40;

LAB41:    xsi_set_current_line(55, ng0);
    t103 = ((char*)((ng2)));
    t104 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 2, 0LL);
    goto LAB43;

LAB47:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(65, ng0);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t10, 0, 0, 2, 0LL);
    goto LAB51;

LAB55:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(71, ng0);

LAB60:    xsi_set_current_line(72, ng0);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB59;

LAB63:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t27) = 1;
    goto LAB68;

LAB67:    t10 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB68;

LAB69:    t13 = (t0 + 2392U);
    t26 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t41, 0, 8);
    t28 = (t26 + 4);
    t34 = (t13 + 4);
    t44 = *((unsigned int *)t26);
    t45 = *((unsigned int *)t13);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t28);
    t48 = *((unsigned int *)t34);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t28);
    t52 = *((unsigned int *)t34);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB75;

LAB72:    if (t53 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t41) = 1;

LAB75:    memset(t57, 0, 8);
    t39 = (t41 + 4);
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t39) != 0)
        goto LAB78;

LAB79:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t42 = (t27 + 4);
    t43 = (t57 + 4);
    t56 = (t65 + 4);
    t72 = *((unsigned int *)t42);
    t73 = *((unsigned int *)t43);
    t74 = (t72 | t73);
    *((unsigned int *)t56) = t74;
    t75 = *((unsigned int *)t56);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB74:    t35 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t57) = 1;
    goto LAB79;

LAB78:    t40 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB79;

LAB80:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t65) = (t77 | t78);
    t58 = (t27 + 4);
    t64 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t58);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t64);
    t88 = (~(t87));
    t8 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t8));
    t92 = (~(t89));
    t93 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t93 & t91);
    t94 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB82;

LAB83:    xsi_set_current_line(76, ng0);

LAB86:    xsi_set_current_line(77, ng0);
    t70 = ((char*)((ng1)));
    t71 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 2, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB85;

LAB89:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t27) = 1;
    goto LAB94;

LAB93:    t10 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB95:    t13 = (t0 + 2552U);
    t26 = *((char **)t13);
    t13 = ((char*)((ng2)));
    memset(t41, 0, 8);
    t28 = (t26 + 4);
    t34 = (t13 + 4);
    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t13);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t34);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t34);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t59 = (t51 & t55);
    if (t59 != 0)
        goto LAB101;

LAB98:    if (t54 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t41) = 1;

LAB101:    memset(t57, 0, 8);
    t39 = (t41 + 4);
    t60 = *((unsigned int *)t39);
    t61 = (~(t60));
    t62 = *((unsigned int *)t41);
    t63 = (t62 & t61);
    t66 = (t63 & 1U);
    if (t66 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t39) != 0)
        goto LAB104;

LAB105:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t57);
    t72 = (t67 | t68);
    *((unsigned int *)t65) = t72;
    t42 = (t27 + 4);
    t43 = (t57 + 4);
    t56 = (t65 + 4);
    t73 = *((unsigned int *)t42);
    t74 = *((unsigned int *)t43);
    t75 = (t73 | t74);
    *((unsigned int *)t56) = t75;
    t76 = *((unsigned int *)t56);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB100:    t35 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t57) = 1;
    goto LAB105;

LAB104:    t40 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB105;

LAB106:    t78 = *((unsigned int *)t65);
    t81 = *((unsigned int *)t56);
    *((unsigned int *)t65) = (t78 | t81);
    t58 = (t27 + 4);
    t64 = (t57 + 4);
    t82 = *((unsigned int *)t58);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t8 = (t84 & t83);
    t85 = *((unsigned int *)t64);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t89 = (t87 & t86);
    t88 = (~(t8));
    t91 = (~(t89));
    t92 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t92 & t88);
    t93 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t93 & t91);
    goto LAB108;

LAB109:    xsi_set_current_line(81, ng0);

LAB112:    xsi_set_current_line(82, ng0);
    t70 = ((char*)((ng5)));
    t71 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 2, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB111;

LAB116:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(90, ng0);
    t10 = ((char*)((ng1)));
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t10, 0, 0, 2, 0LL);
    goto LAB120;

}


extern void work_m_00000000001564079240_1249495997_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000001564079240_1249495997", "isim/main_tb_isim_beh.exe.sim/work/m_00000000001564079240_1249495997.didat");
	xsi_register_executes(pe);
}
