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
static const char *ng0 = "Input: %g\t  %b%b Output: %d \r\n";
static const char *ng1 = "C:/Users/ProBook/Documents/fpga/xilinx_projects/fifo/tb_fifo.v";
static const char *ng2 = "fifo_output.txt";
static const char *ng3 = "w";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "";
static const char *ng7 = " << Starting the Simulation >>";
static int ng8[] = {16, 0};
static const char *ng9 = "Input: %g\t  %b%b";
static const char *ng10 = "Output: %d \r\n";
static const char *ng11 = " << Ending the Simulation >>";

void Monitor_56_1(char *);
void Monitor_56_1(char *);


static void Monitor_56_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 1, (char)118, t10, 3);

LAB1:    return;
}

static void Initial_44_0(char *t0)
{
    char t3[8];
    char t5[16];
    char *t1;
    char *t2;
    char *t4;
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng1);

LAB4:    xsi_set_current_line(45, ng1);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(55, ng1);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t5, 64);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(56, ng1);
    Monitor_56_1(t0);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    t8 = (t0 + 1608);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1768);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng0, 5, t0, (char)118, t5, 64, (char)118, t10, 1, (char)118, t13, 1, (char)118, t15, 3);
    xsi_set_current_line(58, ng1);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58, ng1);
    t4 = ((char*)((ng5)));
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(61, ng1);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(61, ng1);
    t4 = ((char*)((ng4)));
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(62, ng1);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(62, ng1);
    t4 = ((char*)((ng5)));
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(63, ng1);
    xsi_set_current_line(63, ng1);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB9:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t6, 32, t7, 32);
    t8 = (t3 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng1);
    t2 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t5, 64);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(74, ng1);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    xsi_set_current_line(75, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

LAB10:    xsi_set_current_line(63, ng1);

LAB12:    xsi_set_current_line(65, ng1);
    t9 = (t0 + 2088);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t5, 1000.0000000000000, 1000.0000000000000);
    t13 = (t0 + 1608);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlogfile_fwrite(*((unsigned int *)t11), 0, 0, 1, ng9, 4, t0, (char)118, t5, 64, (char)118, t15, 1, (char)118, t23, 1);
    xsi_set_current_line(67, ng1);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng10, 2, t0, (char)118, t8, 3);
    xsi_set_current_line(68, ng1);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(68, ng1);
    t4 = (t0 + 1768);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t3, 0, 8);
    t8 = (t7 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t8) == 0)
        goto LAB14;

LAB16:    t9 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t9) = 1;

LAB17:    t10 = (t3 + 4);
    t11 = (t7 + 4);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB18:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 1U);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(63, ng1);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t6, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);
    goto LAB9;

LAB14:    *((unsigned int *)t3) = 1;
    goto LAB17;

LAB19:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t28 | t29);
    goto LAB18;

}

static void Always_79_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng1);
    t2 = (t0 + 3064);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng1);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

void Monitor_56_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3312);
    t2 = (t0 + 3824);
    xsi_vlogfile_monitor((void *)Monitor_56_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000004227233188_2501825637_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_79_2,(void *)Monitor_56_1};
	xsi_register_didat("work_m_00000000004227233188_2501825637", "isim/tb_fifo_isim_beh.exe.sim/work/m_00000000004227233188_2501825637.didat");
	xsi_register_executes(pe);
}
