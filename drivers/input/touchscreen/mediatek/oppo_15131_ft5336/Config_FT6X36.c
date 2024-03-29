/************************************************************************
* Copyright (C) 2012-2015, Focaltech Systems (R)，All Rights Reserved.
*
* File Name: Config_FT6X36.c
*
* Author: Software Development Team, AE
*
* Created: 2015-10-08
*
* Abstract: Set Config for FT6X36/FT3X07/FT6416/FT6426
*
************************************************************************/
#include <linux/kernel.h>
#include <linux/string.h>
#include "Config_FT6X36.h"
#include "ini.h"
#include "Global.h"


struct stCfg_FT6X36_TestItem g_stCfg_FT6X36_TestItem;
struct stCfg_FT6X36_BasicThreshold g_stCfg_FT6X36_BasicThreshold;


void OnInit_FT6X36_TestItem(char *strIniFile)
{
	char str[512]={0};

	//////////////////////////////////////////////////////////// FW Version
	GetPrivateProfileString("TestItem","FW_VERSION_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.FW_VERSION_TEST = a_to_i(str);

	//////////////////////////////////////////////////////////// Factory ID
	GetPrivateProfileString("TestItem","FACTORY_ID_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.FACTORY_ID_TEST = a_to_i(str);

	//////////////////////////////////////////////////////////// Project Code Test
	GetPrivateProfileString("TestItem","PROJECT_CODE_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.PROJECT_CODE_TEST = a_to_i(str);	

	//////////////////////////////////////////////////////////// IC Version
	GetPrivateProfileString("TestItem","IC_VERSION_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.IC_VERSION_TEST = a_to_i(str);

	/////////////////////////////////// RawData Test
	GetPrivateProfileString("TestItem","RAWDATA_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.RAWDATA_TEST = a_to_i(str);

	/////////////////////////////////// CHANNEL_NUM_TEST
	GetPrivateProfileString("TestItem","CHANNEL_NUM_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.CHANNEL_NUM_TEST = a_to_i(str);

	/////////////////////////////////// CHANNEL_SHORT_TEST
	GetPrivateProfileString("TestItem","CHANNEL_SHORT_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.CHANNEL_SHORT_TEST = a_to_i(str);

	/////////////////////////////////// INT_PIN_TEST
	GetPrivateProfileString("TestItem","INT_PIN_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.INT_PIN_TEST = a_to_i(str);

	/////////////////////////////////// RESET_PIN_TEST
	GetPrivateProfileString("TestItem","RESET_PIN_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.RESET_PIN_TEST = a_to_i(str);

	/////////////////////////////////// NOISE_TEST
	GetPrivateProfileString("TestItem","NOISE_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.NOISE_TEST = a_to_i(str);

	/////////////////////////////////// CB_TEST
	GetPrivateProfileString("TestItem","CB_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.CB_TEST = a_to_i(str);

	/////////////////////////////////// DELTA_CB_TEST
	GetPrivateProfileString("TestItem","DELTA_CB_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.DELTA_CB_TEST = a_to_i(str);

	/////////////////////////////////// CHANNELS_DEVIATION_TEST
	GetPrivateProfileString("TestItem","CHANNELS_DEVIATION_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.CHANNELS_DEVIATION_TEST = a_to_i(str);

	/////////////////////////////////// TWO_SIDES_DEVIATION_TEST
	GetPrivateProfileString("TestItem","TWO_SIDES_DEVIATION_TEST","1",str,strIniFile);
	g_stCfg_FT6X36_TestItem.TWO_SIDES_DEVIATION_TEST = a_to_i(str);


	/////////////////////////////////// FPC_SHORT_TEST
	GetPrivateProfileString("TestItem","FPC_SHORT_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.FPC_SHORT_TEST = a_to_i(str);

	/////////////////////////////////// FPC_OPEN_TEST
	GetPrivateProfileString("TestItem","FPC_OPEN_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.FPC_OPEN_TEST = a_to_i(str);

	/////////////////////////////////// SREF_OPEN_TEST
	GetPrivateProfileString("TestItem","SREF_OPEN_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.SREF_OPEN_TEST = a_to_i(str);

	/////////////////////////////////// TE_TEST
	GetPrivateProfileString("TestItem","TE_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.TE_TEST = a_to_i(str);

	/////////////////////////////////// CB_DEVIATION_TEST
	GetPrivateProfileString("TestItem","CB_DEVIATION_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.CB_DEVIATION_TEST = a_to_i(str);

	/////////////////////////////////// DIFFER_TEST
	GetPrivateProfileString("TestItem","DIFFER_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.DIFFER_TEST = a_to_i(str);

	/////////////////////////////////// WEAK_SHORT_TEST
	GetPrivateProfileString("TestItem","WEAK_SHORT_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.WEAK_SHORT_TEST = a_to_i(str);

	/////////////////////////////////// DIFFER_TEST2
	GetPrivateProfileString("TestItem","DIFFER_TEST2","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.DIFFER_TEST2 = a_to_i(str);

	/////////////////////////////////// K1_DIFFER_TEST
	GetPrivateProfileString("TestItem","K1_DIFFER_TEST","0",str,strIniFile);
	g_stCfg_FT6X36_TestItem.K1_DIFFER_TEST = a_to_i(str);
}

void OnInit_FT6X36_BasicThreshold(char *strIniFile)
{
	char str[512]={0};

	//////////////////////////////////////////////////////////// FW Version

	GetPrivateProfileString( "Basic_Threshold", "FW_VER_VALUE", "0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FW_VER_VALUE = a_to_i(str);

	//////////////////////////////////////////////////////////// Factory ID
	GetPrivateProfileString("Basic_Threshold","Factory_ID_Number","255",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.Factory_ID_Number = a_to_i(str);

	//////////////////////////////////////////////////////////// Project Code Test
	GetPrivateProfileString("Basic_Threshold","Project_Code"," ",str,strIniFile);
	//g_stCfg_FT6X36_BasicThreshold.Project_Code.Format("%s", str);
	sprintf(g_stCfg_FT6X36_BasicThreshold.Project_Code, "%s", str);

	//////////////////////////////////////////////////////////// IC Version
	GetPrivateProfileString("Basic_Threshold","IC_Version","3",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.IC_Version = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","RawDataTest_Min","13000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.RawDataTest_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","RawDataTest_Max","17000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.RawDataTest_Max = a_to_i(str);


	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_ChannelNum","22",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelNumTest_ChannelNum = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_KeyNum","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelNumTest_KeyNum = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelShortTest_K1","255",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelShortTest_K1 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelShortTest_K2","255",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelShortTest_K2 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelShortTest_CB","255",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelShortTest_CB = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ResetPinTest_RegAddr","136",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ResetPinTest_RegAddr = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","IntPinTest_RegAddr","175",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.IntPinTest_RegAddr = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_Max","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_Max = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_Frames","32",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_Frames = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_Time","1",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_Time = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_SampeMode","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_SampeMode = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_NoiseMode","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_NoiseMode = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_ShowTip","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.NoiseTest_ShowTip = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","CbTest_Min","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.CbTest_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","CbTest_Max","250",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.CbTest_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Base","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Base = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Differ_Max","50",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Differ_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Include_Key_Test","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Include_Key_Test = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Key_Differ_Max","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Key_Differ_Max = a_to_i(str);


	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S1","15",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S1 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S2","15",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S3","12",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S3 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S4","12",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S4 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S5","12",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S5 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Deviation_S6","12",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Deviation_S6 = a_to_i(str);

	/////////////临界值
	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Set_Critical","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Set_Critical = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S1","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S1 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S2","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S3","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S3 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S4","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S4 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S5","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S5 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DeltaCbTest_Critical_S6","20",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DeltaCbTest_Critical_S6 = a_to_i(str);	


	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S1","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S1 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S2","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S3","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S3 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S4","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S4 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S5","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S5 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Deviation_S6","8",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Deviation_S6 = a_to_i(str);

	/////////////临界值
	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Set_Critical","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Set_Critical = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S1","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S1 = a_to_i(str);	

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S2","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S3","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S3 = a_to_i(str);	

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S4","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S4 = a_to_i(str);	

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S5","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S5 = a_to_i(str);	

	GetPrivateProfileString("Basic_Threshold","ChannelsDeviationTest_Critical_S6","13",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.ChannelsDeviationTest_Critical_S6 = a_to_i(str);	

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S1","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S1 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S2","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S3","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S3 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S4","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S4 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S5","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S5 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Deviation_S6","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Deviation_S6 = a_to_i(str);

	/////////////临界值
	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Set_Critical","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Set_Critical = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S1","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S1 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S2","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S2 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S3","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S3 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S4","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S4 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S5","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S5 = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","TwoSidesDeviationTest_Critical_S6","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.TwoSidesDeviationTest_Critical_S6 = a_to_i(str);

	// fpc short 
	GetPrivateProfileString("Basic_Threshold","FPCShortTest_Min_CB","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCShort_CB_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCShortTest_Max_CB","1015",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCShort_CB_Max = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCShortTest_Min_RawData","5000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCShort_RawData_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCShortTest_Max_RawData","50000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCShort_RawData_Max = a_to_i(str);

	//fpc open
	GetPrivateProfileString("Basic_Threshold","FPCOpenTest_Min_CB","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCOpen_CB_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCOpenTest_Max_CB","1015",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCOpen_CB_Max = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCOpenTest_Min_RawData","5000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCOpen_RawData_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","FPCOpenTest_Max_RawData","50000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.FPCOpen_RawData_Max = a_to_i(str);

	//SREFOpen_Test_Hole
	GetPrivateProfileString("Basic_Threshold","SREFOpen_Test_Hole","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.SREFOpen_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SREFOpen_Test_Hole_Base1","50",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.SREFOpen_Hole_Base1 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SREFOpen_Test_Hole_Base2","50",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.SREFOpen_Hole_Base2 = a_to_i(str);

	//CB_DEVIATION_TEST
	GetPrivateProfileString("Basic_Threshold","CBDeviationTest_Hole","50",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.CBDeviationTest_Hole = a_to_i(str);

	//DIFFER_TEST
	GetPrivateProfileString("Basic_Threshold","DifferTest_Ave_Hole","500",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.Differ_Ave_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest_Max_Hole","500",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.Differ_Max_Hole = a_to_i(str);


	//WEAK_SHORT_TEST
	GetPrivateProfileString("Basic_Threshold","Weak_Short_Hole","500",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.WeakShortThreshold = a_to_i(str);

	//DIFFER_TEST2
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_H_Min","20000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_H_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_H_Max","24000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_H_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_M_Min","7100",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_M_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_M_Max","7300",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_M_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_L_Min","14000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_L_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_L_Max","16000",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.DifferTest2_Data_L_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_H","1",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.bDifferTest2_Data_H = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_M","1",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.bDifferTest2_Data_M = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","DifferTest2_Data_L","1",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.bDifferTest2_Data_L = a_to_i(str);

	//K1 differ test
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_StartK1","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_StartK1 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_EndK1","25",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_EndK1 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_MinHole_STC2","0",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_MinHold2 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_MaxHole_STC2","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_MaxHold2 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_MinHole_STC4","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_MinHold4 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_MaxHole_STC4","10",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_MaxHold4 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_Deviation2","1",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_Deviation2 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","K1DifferTest_Deviation4","5",str,strIniFile);
	g_stCfg_FT6X36_BasicThreshold.K1DifferTest_Deviation4 = a_to_i(str);
}

void SetTestItem_FT6X36()
{
	//int value = 0;
	g_TestItemNum = 0;

	//////////////////////////////////////////////////Download / Upgrade
	/*value = g_stCfg_CommonCfg.Run_Mode;
	if(value == 1 || value == 4 || value == 5)//Download
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_DOWNLOAD;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_DOWNLOAD];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;
	}
	else if(value == 2 || value == 3 || value == 6)//Upgrade
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_UPGRADE;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_UPGRADE];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;
	}
	else if(value == 8 || value == 9 || value == 10)//Upgrade
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_WRITE_CONFIG;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_WRITE_CONFIG];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;
	}
	if(value == 5 || value == 6 || value == 8)//Only Download /Upgrade/write config
	{	
		return;
	}

	if( g_stCfg_SiuBoard.bVDDTest )
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_VDD;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumSiuItem[Code_VDD];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = Type_SiuItem;
		g_TestItemNum++;
	}
	if( g_stCfg_SiuBoard.bIOVccTest )
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_IOVCC;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumSiuItem[Code_IOVCC];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = Type_SiuItem;
		g_TestItemNum++;
	}*/

	//////////////////////////////////////////////////FACTORY_ID_TEST
	if( g_stCfg_FT6X36_TestItem.FACTORY_ID_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_FACTORY_ID_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_FACTORY_ID_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Project Code Test
	if( g_stCfg_FT6X36_TestItem.PROJECT_CODE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_PROJECT_CODE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_PROJECT_CODE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FW Version Test
	if( g_stCfg_FT6X36_TestItem.FW_VERSION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_FW_VERSION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_FW_VERSION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////IC Version Test
	if( g_stCfg_FT6X36_TestItem.IC_VERSION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_IC_VERSION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_IC_VERSION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Enter Factory Mode
	g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_ENTER_FACTORY_MODE;
	//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_ENTER_FACTORY_MODE];
	g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
	g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
	g_TestItemNum++;

	//////////////////////////////////////////////////CHANNEL_NUM_TEST
	if( g_stCfg_FT6X36_TestItem.CHANNEL_NUM_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_CHANNEL_NUM_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_CHANNEL_NUM_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	
	//////////////////////////////////////////////////RawData Test
	if( g_stCfg_FT6X36_TestItem.RAWDATA_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_RAWDATA_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_RAWDATA_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Differ Test
	if( g_stCfg_FT6X36_TestItem.DIFFER_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_DIFFER_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_DIFFER_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Differ Test2
	if( g_stCfg_FT6X36_TestItem.DIFFER_TEST2 == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_DIFFER_TEST2;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_DIFFER_TEST2];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CB Deviation Test
	if( g_stCfg_FT6X36_TestItem.CB_DEVIATION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_CB_DEVIATION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_CB_DEVIATION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FPC_SHORT_TEST
	if( g_stCfg_FT6X36_TestItem.FPC_SHORT_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_FPC_SHORT_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_FPC_SHORT_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FPC_OPEN_TEST
	if( g_stCfg_FT6X36_TestItem.FPC_OPEN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_FPC_OPEN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_FPC_OPEN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CB_TEST
	if( g_stCfg_FT6X36_TestItem.CB_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_CB_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_CB_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////DELTA_CB_TEST
	if( g_stCfg_FT6X36_TestItem.DELTA_CB_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_DELTA_CB_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_DELTA_CB_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CHANNELS_DEVIATION_TEST
	if( g_stCfg_FT6X36_TestItem.CHANNELS_DEVIATION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_CHANNELS_DEVIATION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_CHANNELS_DEVIATION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////TWO_SIDES_DEVIATION_TEST
	if( g_stCfg_FT6X36_TestItem.TWO_SIDES_DEVIATION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_TWO_SIDES_DEVIATION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_TWO_SIDES_DEVIATION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CHANNEL_SHORT_TEST
	if( g_stCfg_FT6X36_TestItem.CHANNEL_SHORT_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_CHANNEL_SHORT_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_CHANNEL_SHORT_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////SREF_OPEN_TEST
	if( g_stCfg_FT6X36_TestItem.SREF_OPEN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_SREF_OPEN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_SREF_OPEN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////NOISE_TEST
	if( g_stCfg_FT6X36_TestItem.NOISE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_NOISE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_NOISE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	   
	//////////////////////////////////////////////////Weak Short Test
	if( g_stCfg_FT6X36_TestItem.WEAK_SHORT_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_WEAK_SHORT_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_WEAK_SHORT_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////K1 Differ Test
	if( g_stCfg_FT6X36_TestItem.K1_DIFFER_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_K1_DIFFER_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_K1_DIFFER_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////RESET_PIN_TEST
	if( g_stCfg_FT6X36_TestItem.RESET_PIN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_RESET_PIN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_RESET_PIN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	//////////////////////////////////////////////////INT_PIN_TEST
	if( g_stCfg_FT6X36_TestItem.INT_PIN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_INT_PIN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_INT_PIN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////TE Test
	if( g_stCfg_FT6X36_TestItem.TE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT6X36_TE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT6X36[Code_FT6X36_TE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

}

