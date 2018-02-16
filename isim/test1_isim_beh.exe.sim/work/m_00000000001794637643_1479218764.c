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
static const char *ng0 = "C:/Users/ali taheri/Desktop/verilog/MIPS CPU/9232210/SignExtender16to32.v";
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static int ng3[] = {31, 0};
static int ng4[] = {16, 0};
static int ng5[] = {1, 0};



static void Always_7_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1448);
    t9 = (t0 + 1448);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(9, ng0);
    xsi_set_current_line(9, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t9 = (t6 + 4);
    t15 = *((unsigned int *)t9);
    t18 = (~(t15));
    t22 = *((unsigned int *)t6);
    t25 = (t22 & t18);
    t27 = (t25 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB9:    xsi_set_current_line(9, ng0);

LAB11:    xsi_set_current_line(10, ng0);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t12 = (t11 + 4);
    t28 = *((unsigned int *)t11);
    t31 = (t28 >> 15);
    t32 = (t31 & 1);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t12);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t10) = t35;
    t13 = (t0 + 1448);
    t14 = (t0 + 1448);
    t17 = (t14 + 72U);
    t21 = *((char **)t17);
    t36 = (t0 + 1608);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_bit_index(t8, t21, 2, t38, 32, 1);
    t39 = (t8 + 4);
    t40 = *((unsigned int *)t39);
    t16 = (!(t40));
    if (t16 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_vlogvar_assign_value(t13, t7, 0, *((unsigned int *)t8), 1);
    goto LAB13;

}


extern void work_m_00000000001794637643_1479218764_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_00000000001794637643_1479218764", "isim/test1_isim_beh.exe.sim/work/m_00000000001794637643_1479218764.didat");
	xsi_register_executes(pe);
}
