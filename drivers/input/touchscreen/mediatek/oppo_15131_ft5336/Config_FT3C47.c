/************************************************************************
* Copyright (C) 2012-2015, Focaltech Systems (R)��All Rights Reserved.
*
* File Name: Config_FT3C47.c
*
* Author: Software Development Team, AE
*
* Created: 2015-12-02
*
* Abstract: Set Config for FT3C47
*
************************************************************************/
#include <linux/kernel.h>
#include <linux/string.h>
#include "Config_FT3C47.h"
#include "ini.h"
#include "Global.h"


struct stCfg_FT3C47_TestItem g_stCfg_FT3C47_TestItem;
struct stCfg_FT3C47_BasicThreshold g_stCfg_FT3C47_BasicThreshold;

void OnInit_FT3C47_TestItem(char *strIniFile)
{
	char str[512];

	//////////////////////////////////////////////////////////// FW Version
	GetPrivateProfileString("TestItem","FW_VERSION_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.FW_VERSION_TEST = a_to_i(str);

	//////////////////////////////////////////////////////////// Factory ID
	GetPrivateProfileString("TestItem","FACTORY_ID_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.FACTORY_ID_TEST = a_to_i(str);

	//////////////////////////////////////////////////////////// Project Code Test
	GetPrivateProfileString("TestItem","PROJECT_CODE_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.PROJECT_CODE_TEST = a_to_i(str);	

	//////////////////////////////////////////////////////////// IC Version
	GetPrivateProfileString("TestItem","IC_VERSION_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.IC_VERSION_TEST = a_to_i(str);

	//////////////////////////////////////////////////////////// LCM ID
	GetPrivateProfileString("TestItem","LCM_ID_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.LCM_ID_TEST = a_to_i(str);

	/////////////////////////////////// RawData Test
	GetPrivateProfileString("TestItem","RAWDATA_TEST","1",str,strIniFile);
	g_stCfg_FT3C47_TestItem.RAWDATA_TEST = a_to_i(str);

	/////////////////////////////////// Adc Detect Test
	GetPrivateProfileString("TestItem","ADC_DETECT_TEST","1",str,strIniFile);
	g_stCfg_FT3C47_TestItem.ADC_DETECT_TEST = a_to_i(str);

	/////////////////////////////////// RX_SHORT_TEST
	//GetPrivateProfileString("TestItem","RX_SHORT_TEST","1",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.RX_SHORT_TEST = a_to_i(str);

	/////////////////////////////////// TX_SHORT_TEST
	//GetPrivateProfileString("TestItem","TX_SHORT_TEST","1",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.TX_SHORT_TEST = a_to_i(str);

	/////////////////////////////////// SCAP_CB_TEST
	GetPrivateProfileString("TestItem","SCAP_CB_TEST","1",str,strIniFile);
	g_stCfg_FT3C47_TestItem.SCAP_CB_TEST = a_to_i(str);

	/////////////////////////////////// SCAP_RAWDATA_TEST
	GetPrivateProfileString("TestItem","SCAP_RAWDATA_TEST","1",str,strIniFile);
	g_stCfg_FT3C47_TestItem.SCAP_RAWDATA_TEST = a_to_i(str);

	/////////////////////////////////// CHANNEL_NUM_TEST
	GetPrivateProfileString("TestItem","CHANNEL_NUM_TEST","1",str,strIniFile);
	g_stCfg_FT3C47_TestItem.CHANNEL_NUM_TEST = a_to_i(str);

	/////////////////////////////////// INT_PIN_TEST
	GetPrivateProfileString("TestItem","INT_PIN_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.INT_PIN_TEST = a_to_i(str);

	/////////////////////////////////// RESET_PIN_TEST
	GetPrivateProfileString("TestItem","RESET_PIN_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.RESET_PIN_TEST = a_to_i(str);

	/////////////////////////////////// NOISE_TEST
	GetPrivateProfileString("TestItem","NOISE_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.NOISE_TEST = a_to_i(str);

	/////////////////////////////////// SCAP_DIFFER_TEST
	//GetPrivateProfileString("TestItem","SCAP_DIFFER_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.SCAP_DIFFER_TEST = a_to_i(str);

	/////////////////////////////////// SCAP_CLB_TEST
	//GetPrivateProfileString("TestItem","SCAP_CLB_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.SCAP_CLB_TEST = a_to_i(str);

	/////////////////////////////////// RX_CROSSTALK_TEST
	//GetPrivateProfileString("TestItem","RX_CROSSTALK_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.RX_CROSSTALK_TEST = a_to_i(str);

	/////////////////////////////////// RAWDATA_RX_DEVIATION_TEST
	//GetPrivateProfileString("TestItem","RAWDATA_RX_DEVIATION_TEST","0",str,strIniFile);
	//g_stCfg_FT5X36_TestItem.RAWDATA_RX_DEVIATION_TEST = a_to_i(str);

	/////////////////////////////////// RAWDATA_UNIFORMITY_TEST
	//GetPrivateProfileString("TestItem","RAWDATA_UNIFORMITY_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.RAWDATA_UNIFORMITY_TEST = a_to_i(str);

	/////////////////////////////////// RX_LINEARITY_TEST
	//GetPrivateProfileString("TestItem","RX_LINEARITY_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.RX_LINEARITY_TEST = a_to_i(str);

	/////////////////////////////////// TX_LINEARITY_TEST
	//GetPrivateProfileString("TestItem","TX_LINEARITY_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.TX_LINEARITY_TEST = a_to_i(str);

	/////////////////////////////////// DIFFERDATA_UNIFORMITY_TEST
	//GetPrivateProfileString("TestItem","DIFFERDATA_UNIFORMITY_TEST","0",str,strIniFile);
	//g_stCfg_FT3C47_TestItem.DIFFERDATA_UNIFORMITY_TEST = a_to_i(str);

	/////////////////////////////////// WEAK_SHORT_CIRCUIT_TEST
	GetPrivateProfileString("TestItem","WEAK_SHORT_CIRCUIT_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.WEAK_SHORT_CIRCUIT_TEST = a_to_i(str);

	/////////////////////////////////// UNIFORMITY_TEST
	GetPrivateProfileString("TestItem","UNIFORMITY_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.UNIFORMITY_TEST = a_to_i(str);

	/////////////////////////////////// CM_TEST
	GetPrivateProfileString("TestItem","CM_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.CM_TEST = a_to_i(str);

	/////////////////////////////////// RAWDATA_MARGIN_TEST
	GetPrivateProfileString("TestItem","RAWDATA_MARGIN_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.RAWDATA_MARGIN_TEST = a_to_i(str);

	/////////////////////////////////// panel differ_TEST
	GetPrivateProfileString("TestItem","PANEL_DIFFER_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.PANEL_DIFFER_TEST = a_to_i(str);

	/////////////////////////////////// panel differ uniformity_TEST
	GetPrivateProfileString("TestItem","PANEL_DIFFER_UNIFORMITY_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.PANEL_DIFFER_UNIFORMITY_TEST = a_to_i(str);

	///////////////////////////////////TE_TEST
	GetPrivateProfileString("TestItem","TE_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.TE_TEST = a_to_i(str);

	///////////////////////////////////SITO_RAWDATA_UNIFORMITY_TEST
	GetPrivateProfileString("TestItem","SITO_RAWDATA_UNIFORMITY_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.SITO_RAWDATA_UNIFORMITY_TEST = a_to_i(str);

	///////////////////////////////////PATTERN_TEST
	GetPrivateProfileString("TestItem","PATTERN_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.PATTERN_TEST = a_to_i(str);

	//force touch
	///////////////////////////////////FORCETOUCH_CHANNEL_NUM_TEST
	GetPrivateProfileString("TestItem","FORCETOUCH_CHANNEL_NUM_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.FORCETOUCH_CHANNEL_NUM_TEST = a_to_i(str);

	///////////////////////////////////FORCETOUCH_RAWDATA_TEST
	GetPrivateProfileString("TestItem","FORCETOUCH_RAWDATA_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.FORCETOUCH_RAWDATA_TEST = a_to_i(str);

	///////////////////////////////////FORCETOUCH_CB_TEST
	GetPrivateProfileString("TestItem","FORCETOUCH_CB_TEST","0",str,strIniFile);
	g_stCfg_FT3C47_TestItem.FORCETOUCH_CB_TEST = a_to_i(str);
}
void OnInit_FT3C47_BasicThreshold(char *strIniFile)
{
	char str[512];

	//////////////////////////////////////////////////////////// FW Version

	GetPrivateProfileString( "Basic_Threshold", "FW_VER_VALUE", "0",str, strIniFile);
	g_stCfg_FT3C47_BasicThreshold.FW_VER_VALUE = a_to_i(str);

	//////////////////////////////////////////////////////////// Factory ID
	GetPrivateProfileString("Basic_Threshold","Factory_ID_Number","255",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Factory_ID_Number = a_to_i(str);

	//////////////////////////////////////////////////////////// Project Code Test
	GetPrivateProfileString("Basic_Threshold","Project_Code"," ",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.Project_Code.Format("%s", str);
	sprintf(g_stCfg_FT3C47_BasicThreshold.Project_Code, "%s", str);

	//////////////////////////////////////////////////////////// IC Version
	GetPrivateProfileString("Basic_Threshold","IC_Version","3",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.IC_Version = a_to_i(str);

	//////////////////////////////////////////////////////////// LCM ID
	GetPrivateProfileString("Basic_Threshold","LCM_ID","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.LCM_ID = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","RawDataTest_Low_Min","3000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_low_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","RawDataTest_Low_Max","15000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_Low_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","RawDataTest_High_Min","3000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_high_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","RawDataTest_High_Max","15000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_high_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","RawDataTest_LowFreq","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_SetLowFreq  = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","RawDataTest_HighFreq","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawDataTest_SetHighFreq = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","Adc_Detect_Max","0",str,strIniFile);
    g_stCfg_FT3C47_BasicThreshold.AdcDetect_Max = a_to_i( str ); 

	//GetPrivateProfileString("Basic_Threshold","RxShortTest_Min","1000",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RxShortTest_Min = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","RxShortTest_Max","32800",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RxShortTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","TxShortTest_Min","300",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.TxShortTest_Min = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","TxShortTest_Max","3000",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.TxShortTest_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapCbTest_OFF_Min","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_OFF_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SCapCbTest_OFF_Max","240",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_OFF_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapCbTest_ON_Min","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_ON_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SCapCbTest_ON_Max","240",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_ON_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ScapCBTest_SetWaterproof_OFF","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_SetWaterproof_OFF = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ScapCBTest_SetWaterproof_ON","240",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_SetWaterproof_ON = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapCBTest_LetTx_Disable","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapCbTest_LetTx_Disable = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","SCapDifferTest_Min","100",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.SCapDifferTest_Min = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","SCapDifferTest_Max","10000",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.SCapDifferTest_Max = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","SCapDifferTest_CbLevel","2",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.SCapDifferTest_CbLevel = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_OFF_Min","5000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_OFF_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_OFF_Max","8500",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_OFF_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_ON_Min","5000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_ON_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_ON_Max","8500",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_ON_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_SetWaterproof_OFF","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_SetWaterproof_OFF = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_SetWaterproof_ON","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_SetWaterproof_ON = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","SCapRawDataTest_LetTx_Disable","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SCapRawDataTest_LetTx_Disable = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_Mapping","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bChannelTestMapping = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_NoMapping","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bChannelTestNoMapping = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_TxNum","13",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ChannelNumTest_TxNum = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_RxNum","24",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ChannelNumTest_RxNum = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_Tx_NP_Num","13",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ChannelNumTest_TxNpNum = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ChannelNumTest_Rx_NP_Num","24",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ChannelNumTest_RxNpNum = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ResetPinTest_RegAddr","136",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ResetPinTest_RegAddr = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","IntPinTest_RegAddr","79",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.IntPinTest_RegAddr = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","IntPinTest_TestNum","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.IntPinTest_TestNum = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_Max","20",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_Max = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_Frames","32",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_Frames = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_Time","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_Time = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","NoiseTest_SampeMode","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_SampeMode = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_NoiseMode","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_NoiseMode = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_ShowTip","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_ShowTip = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_GloveMode","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bNoiseTest_GloveMode = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_RawdataMin","5000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_RawdataMin = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","GloveNoiseTest_Coefficient","100",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.GloveNoiseTest_Coefficient = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","Set_Frequency","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Set_Frequency = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseThreshold_Choose","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bNoiseThreshold_Choose = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_Threshold","50",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_Threshold = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","NoiseTest_MinNGFrame","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.NoiseTest_MinNgFrame = a_to_i(str);
	
	//GetPrivateProfileString("Basic_Threshold","SCapClbTest_Frame","3",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.SCapClbTest_Frame = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","SCapClbTest_Max","1000",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.SCapClbTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","RxCrosstalkTest_Min","-100",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RxCrosstalkTest_Min = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","RxCrosstalkTest_Max","300",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RxCrosstalkTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","RawDataRxDeviationTest_Max","500",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RawDataRxDeviationTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","RawDataUniformityTest_Percent","90",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RawDataUniformityTest_Percent = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","RxLinearityTest_Max","50",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.RxLinearityTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","TxLinearityTest_Max","50",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.TxLinearityTest_Max = a_to_i(str);

	//GetPrivateProfileString("Basic_Threshold","DifferDataUniformityTest_Percent","80",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.DifferDataUniformityTest_Percent = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","WeakShortTest_CG","2000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.WeakShortTest_CG = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","WeakShortTest_CC","2000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.WeakShortTest_CC = a_to_i(str);
	//GetPrivateProfileString("Basic_Threshold","WeakShortTest_ChannelNum","38",str,strIniFile);
	//g_stCfg_FT3C47_BasicThreshold.WeakShortTest_ChannelNum = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_Check_Tx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_CheckTx = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_Check_Rx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_CheckRx = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_Check_MinMax","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_CheckMinMax = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_Tx_Hole","20",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_Tx_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_Rx_Hole","20",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_Rx_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","UniformityTest_MinMax_Hole","70",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.Uniformity_MinMax_Hole = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","CMTest_Check_Min","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.CMTest_CheckMin = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","CMTest_Check_Max","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.CMTest_CheckMax = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","CMTest_Min_Hole","0.5",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.CMTest_MinHole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","CMTest_Max_Hole","5",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.CMTest_MaxHole = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","RawdataMarginTest_Min","10",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawdataMarginTest_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","RawdataMarginTest_Max","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.RawdataMarginTest_Max = a_to_i(str);

	//panel differ
	GetPrivateProfileString("Basic_Threshold","PanelDifferTest_Min","150",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDifferTest_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDifferTest_Max","1000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDifferTest_Max = a_to_i(str);

	//panel differ uniformity
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_Check_Tx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_Check_Tx = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_Check_Rx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_Check_Rx = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_Check_MinMax","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_Check_MinMax = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_Tx_Hole","20",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_Tx_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_Rx_Hole","20",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_Rx_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PanelDiffer_UniformityTest_MinMax_Hole","70",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.PanelDiffer_UniformityTest_MinMax_Hole = a_to_i(str);

	//RawdtaUniformityTest		
	GetPrivateProfileString("Basic_Threshold","SITO_RawdataUniformityTest_Check_Tx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SITO_RawdtaUniformityTest_Check_Tx = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SITO_RawdataUniformityTest_Check_Rx","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SITO_RawdtaUniformityTest_Check_Rx = a_to_i(str);
	
	GetPrivateProfileString("Basic_Threshold","SITO_RawdataUniformityTest_Tx_Hole","10",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SITO_RawdtaUniformityTest_Tx_Hole = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","SITO_RawdataUniformityTest_Rx_Hole","10",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.SITO_RawdtaUniformityTest_Rx_Hole = a_to_i(str); 

	//Pram Test
	GetPrivateProfileString("Basic_Threshold","PramTest_Check_00","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bPattern00 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PramTest_Check_FF","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bPatternFF = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PramTest_Check_55","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bPattern55 = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PramTest_Check_AA","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bPatternAA = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","PramTest_Check_BIN","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.bPatternBin = a_to_i(str);

	//force touch
	///////////////////////channel num test
	GetPrivateProfileString("Basic_Threshold","ForceTouch_ChannelNumTest_ChannelNum","10",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_ChannelNumTest_ChannelNum = a_to_i(str);

	/////////////////////scap RawData test
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_OFF_Min","3000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_OFF_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_OFF_Max","15000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_OFF_Max = a_to_i(str); 
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_ON_Min","3000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_ON_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_ON_Max","15000",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_ON_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_SetWaterproof_OFF","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_SetWaterproof_OFF = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapRawDataTest_SetWaterproof_ON","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapRawDataTest_SetWaterproof_ON = a_to_i(str);

	/////////////////////////scap cb test
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapCbTest_OFF_Min","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCbTest_OFF_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapCbTest_OFF_Max","240",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCbTest_OFF_Max = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapCbTest_ON_Min","0",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCbTest_ON_Min = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_SCapCbTest_ON_Max","240",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCbTest_ON_Max = a_to_i(str);

	GetPrivateProfileString("Basic_Threshold","ForceTouch_ScapCBTest_SetWaterproof_OFF","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCBTest_SetWaterproof_OFF = a_to_i(str);
	GetPrivateProfileString("Basic_Threshold","ForceTouch_ScapCBTest_SetWaterproof_ON","1",str,strIniFile);
	g_stCfg_FT3C47_BasicThreshold.ForceTouch_SCapCBTest_SetWaterproof_ON = a_to_i(str);

}

void SetTestItem_FT3C47()
{
	//int value = 0;
	g_TestItemNum = 0;


	//////////////////////////////////////////////////RESET_PIN_TEST
	if( g_stCfg_FT3C47_TestItem.RESET_PIN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_RESET_PIN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_RESET_PIN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FACTORY_ID_TEST
	if( g_stCfg_FT3C47_TestItem.FACTORY_ID_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FACTORY_ID_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FACTORY_ID_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Project Code Test
	if( g_stCfg_FT3C47_TestItem.PROJECT_CODE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_PROJECT_CODE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_PROJECT_CODE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FW Version Test
	if( g_stCfg_FT3C47_TestItem.FW_VERSION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FW_VERSION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FW_VERSION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////LCM ID Test
	if( g_stCfg_FT3C47_TestItem.LCM_ID_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_LCM_ID_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_LCM_ID_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////IC Version Test
	if( g_stCfg_FT3C47_TestItem.IC_VERSION_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_IC_VERSION_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_IC_VERSION_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Enter Factory Mode
	g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_ENTER_FACTORY_MODE;
	//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_ENTER_FACTORY_MODE];
	g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
	g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
	g_TestItemNum++;
/*
#if ENABLE_DOUBLE_CHECK
	//////////////////////////////////////////////////judge Normalize type
	//if (g_ScreenSetParam.isNormalize != None)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_JUDEG_NORMALIZE_TYPE;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_JUDEG_NORMALIZE_TYPE];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;
	}
#endif
*/
	//////////////////////////////////////////////////TE_TEST
	if( g_stCfg_FT3C47_TestItem.TE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_TE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_TE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CHANNEL_NUM_TEST
	if( g_stCfg_FT3C47_TestItem.CHANNEL_NUM_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_CHANNEL_NUM_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_CHANNEL_NUM_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////NOISE_TEST
	if( g_stCfg_FT3C47_TestItem.NOISE_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_NOISE_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_NOISE_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////RawData Test
	if( g_stCfg_FT3C47_TestItem.RAWDATA_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_RAWDATA_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_RAWDATA_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Rawdata Uniformity Test
	if( g_stCfg_FT3C47_TestItem.UNIFORMITY_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_UNIFORMITY_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_UNIFORMITY_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////Rawdata Uniformity Test
	if( g_stCfg_FT3C47_TestItem.SITO_RAWDATA_UNIFORMITY_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_SITO_RAWDATA_UNIFORMITY_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_SITO_RAWDATA_UNIFORMITY_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////CM Test
	if( g_stCfg_FT3C47_TestItem.CM_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_CM_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_CM_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	
	//////////////////////////////////////////////////Adc Detect Test
	if( g_stCfg_FT3C47_TestItem.ADC_DETECT_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_ADCDETECT_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_ADCDETECT_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////SCAP_CB_TEST
	if( g_stCfg_FT3C47_TestItem.SCAP_CB_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_SCAP_CB_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_SCAP_CB_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////SCAP_RAWDATA_TEST
	if( g_stCfg_FT3C47_TestItem.SCAP_RAWDATA_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_SCAP_RAWDATA_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_SCAP_RAWDATA_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////RAWDATA_MARGIN_TEST
	if( g_stCfg_FT3C47_TestItem.RAWDATA_MARGIN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_RAWDATA_MARGIN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_RAWDATA_MARGIN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////WEAK_SHORT_CIRCUIT_TEST
	if( g_stCfg_FT3C47_TestItem.WEAK_SHORT_CIRCUIT_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_WEAK_SHORT_CIRCUIT_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_WEAK_SHORT_CIRCUIT_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	
	//////////////////////////////////////////////////panel differ_TEST
	if( g_stCfg_FT3C47_TestItem.PANEL_DIFFER_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_PANELDIFFER_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_PANELDIFFER_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}
	//////////////////////////////////////////////////panel differ uniformity
	if( g_stCfg_FT3C47_TestItem.PANEL_DIFFER_UNIFORMITY_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_PANELDIFFER_UNIFORMITY_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_PANELDIFFER_UNIFORMITY_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////INT_PIN_TEST
	if( g_stCfg_FT3C47_TestItem.INT_PIN_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_INT_PIN_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_INT_PIN_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].TestResult= RESULT_NULL;
		g_TestItemNum++;		
	}

	//force touch
	//////////////////////////////////////////////////FORCETOUCH_CHANNEL_NUM_TEST
	/*if( g_stCfg_FT3C47_TestItem.FORCETOUCH_CHANNEL_NUM_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FORCE_TOUCH_CHANNEL_NUM_TEST;
		g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FORCE_TOUCH_CHANNEL_NUM_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = Type_DataTestItem;
		g_TestItemNum++;		
	}*/

	//////////////////////////////////////////////////FORCETOUCH_RAWDATA_TEST
	if( g_stCfg_FT3C47_TestItem.FORCETOUCH_RAWDATA_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FORCE_TOUCH_SCAP_RAWDATA_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FORCE_TOUCH_SCAP_RAWDATA_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = RESULT_NULL;
		g_TestItemNum++;		
	}

	//////////////////////////////////////////////////FORCETOUCH_FLATNESS_TEST
	/*if( g_stCfg_FT3C47_TestItem.FORCETOUCH_FLATNESS_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FORCE_TOUCH_FLATNESS_TEST;
		g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FORCE_TOUCH_FLATNESS_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = Type_DataTestItem;
		g_TestItemNum++;		
	}*/

	//////////////////////////////////////////////////FORCETOUCH_CB_TEST
	if( g_stCfg_FT3C47_TestItem.FORCETOUCH_CB_TEST == 1)
	{
		g_stTestItem[0][g_TestItemNum].ItemCode = Code_FT3C47_FORCE_TOUCH_SCAP_CB_TEST;
		//g_stTestItem[0][g_TestItemNum].strItemName = g_strEnumTestItem_FT3C47[Code_FT3C47_FORCE_TOUCH_SCAP_CB_TEST];
		g_stTestItem[0][g_TestItemNum].TestNum = g_TestItemNum;
		g_stTestItem[0][g_TestItemNum].ItemType = RESULT_NULL;
		g_TestItemNum++;		
	}
}


