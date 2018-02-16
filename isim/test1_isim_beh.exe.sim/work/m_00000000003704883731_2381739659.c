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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ali taheri/Desktop/verilog/compute_arcitucture_project/memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1024, 0};
static int ng5[] = {23, 0};
static const char *ng6 = "get address miss";
static int ng7[] = {8, 0};
static unsigned int ng8[] = {7U, 7U};
static int ng9[] = {31, 0};
static int ng10[] = {29, 0};
static int ng11[] = {10, 0};
static int ng12[] = {63, 0};
static int ng13[] = {32, 0};
static int ng14[] = {95, 0};
static int ng15[] = {64, 0};
static int ng16[] = {3, 0};
static int ng17[] = {127, 0};
static int ng18[] = {96, 0};
static const char *ng19 = "dataOut";



static void Initial_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t24[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    t5 = (t0 + 2248);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2248);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2248);
    t5 = (t0 + 2248);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2248);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB7:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng4)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (~(t13));
    t19 = *((unsigned int *)t3);
    t20 = (t19 & t16);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB8;

LAB9:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB8:    xsi_set_current_line(40, ng0);

LAB10:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 2888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t10, 32, t11, 32);
    t12 = (t0 + 2248);
    t15 = (t0 + 2248);
    t26 = (t15 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2248);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2888);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_generic_convert_array_indices(t24, t25, t27, t30, 2, 1, t33, 32, 1);
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t14 = (!(t35));
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t36);
    t17 = (!(t37));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB7;

LAB11:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t25);
    t21 = (t38 - t39);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t12, t4, 0, *((unsigned int *)t25), t22);
    goto LAB12;

}

static void Always_44_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t66[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    int t65;
    char *t68;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);

LAB16:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB20;

LAB17:    if (t18 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB20:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    t28 = (t0 + 2248);
    t32 = (t0 + 2248);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2248);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t39, 32, 2);
    t38 = (t30 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (!(t40));
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t49, 0LL);
    goto LAB15;

LAB19:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(50, ng0);

LAB24:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t32 = (t28 + 4);
    t33 = (t29 + 4);
    t40 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t46 = (t40 ^ t43);
    t47 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t51 = (t47 ^ t50);
    t52 = (t46 | t51);
    t53 = *((unsigned int *)t32);
    t54 = *((unsigned int *)t33);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB28;

LAB25:    if (t55 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t30) = 1;

LAB28:    t35 = (t30 + 4);
    t58 = *((unsigned int *)t35);
    t59 = (~(t58));
    t60 = *((unsigned int *)t30);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);

LAB35:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(69, ng0);

LAB52:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);

LAB42:
LAB31:    goto LAB23;

LAB27:    t34 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(51, ng0);

LAB32:    xsi_set_current_line(52, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    t21 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t41 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t44 = (!(t10));
    t45 = (t41 && t44);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t48 = (!(t11));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB33;

LAB34:    goto LAB31;

LAB33:    t12 = *((unsigned int *)t31);
    t63 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t3, t2, t63, *((unsigned int *)t30), t65);
    goto LAB34;

LAB38:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(59, ng0);

LAB43:    xsi_set_current_line(60, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1208U);
    t32 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t32, 32, 2);
    t29 = (t0 + 2568);
    t33 = (t0 + 2568);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng9)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t30, t31, t66, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t9 = *((unsigned int *)t38);
    t41 = (!(t9));
    t39 = (t31 + 4);
    t10 = *((unsigned int *)t39);
    t44 = (!(t10));
    t45 = (t41 && t44);
    t42 = (t66 + 4);
    t11 = *((unsigned int *)t42);
    t48 = (!(t11));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1208U);
    t32 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t32, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t30, 32, 2);
    t33 = (t0 + 2568);
    t34 = (t0 + 2568);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng12)));
    t38 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t31, t66, t67, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t9 = *((unsigned int *)t39);
    t41 = (!(t9));
    t42 = (t66 + 4);
    t10 = *((unsigned int *)t42);
    t44 = (!(t10));
    t45 = (t41 && t44);
    t68 = (t67 + 4);
    t11 = *((unsigned int *)t68);
    t48 = (!(t11));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1208U);
    t32 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t32, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t30, 32, 2);
    t33 = (t0 + 2568);
    t34 = (t0 + 2568);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng14)));
    t38 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t31, t66, t67, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t9 = *((unsigned int *)t39);
    t41 = (!(t9));
    t42 = (t66 + 4);
    t10 = *((unsigned int *)t42);
    t44 = (!(t10));
    t45 = (t41 && t44);
    t68 = (t67 + 4);
    t11 = *((unsigned int *)t68);
    t48 = (!(t11));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1208U);
    t32 = *((char **)t29);
    t29 = ((char*)((ng16)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t32, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t30, 32, 2);
    t33 = (t0 + 2568);
    t34 = (t0 + 2568);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng17)));
    t38 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t31, t66, t67, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t9 = *((unsigned int *)t39);
    t41 = (!(t9));
    t42 = (t66 + 4);
    t10 = *((unsigned int *)t42);
    t44 = (!(t10));
    t45 = (t41 && t44);
    t68 = (t67 + 4);
    t11 = *((unsigned int *)t68);
    t48 = (!(t11));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 128);
    xsi_set_current_line(67, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB42;

LAB44:    t12 = *((unsigned int *)t66);
    t63 = (t12 + 0);
    t13 = *((unsigned int *)t30);
    t14 = *((unsigned int *)t31);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t29, t6, t63, *((unsigned int *)t31), t65);
    goto LAB45;

LAB46:    t12 = *((unsigned int *)t67);
    t63 = (t12 + 0);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t66);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t33, t6, t63, *((unsigned int *)t66), t65);
    goto LAB47;

LAB48:    t12 = *((unsigned int *)t67);
    t63 = (t12 + 0);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t66);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t33, t6, t63, *((unsigned int *)t66), t65);
    goto LAB49;

LAB50:    t12 = *((unsigned int *)t67);
    t63 = (t12 + 0);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t66);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t33, t6, t63, *((unsigned int *)t66), t65);
    goto LAB51;

}


extern void work_m_00000000003704883731_2381739659_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000003704883731_2381739659", "isim/test1_isim_beh.exe.sim/work/m_00000000003704883731_2381739659.didat");
	xsi_register_executes(pe);
}
