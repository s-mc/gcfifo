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
static const char *ng0 = "C:/Users/ProBook/Documents/fpga/xilinx_projects/fifo/fifo.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {4U, 0U};



static void Cont_35_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 4504);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4520);
    *((int *)t2) = 1;
    t3 = (t0 + 4216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 2296U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 3016);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);

LAB17:    t13 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t13, 3);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t12, 3, t2, 3);
    if (t21 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB16;

LAB18:    xsi_set_current_line(42, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    goto LAB34;

LAB20:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB22:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB24:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

LAB32:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB34;

}


extern void work_m_00000000002695218377_0948142031_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000002695218377_0948142031", "isim/tb_fifo_isim_beh.exe.sim/work/m_00000000002695218377_0948142031.didat");
	xsi_register_executes(pe);
}
