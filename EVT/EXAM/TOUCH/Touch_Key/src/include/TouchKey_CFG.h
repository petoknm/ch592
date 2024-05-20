/********************************** (C) COPYRIGHT *******************************
* File Name : TouchKey_CFG.h
* Author             : WCH
* Version            : V1.0
* Date               : 2023/10/17
* Description        : 触摸按键参数配置头文件
* ********************************************************************************
* Copyright(c) 2023 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention : This software(modified or not) and binary are used for
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/
#ifndef __TOUCH_KEY_CFG_H__
#define __TOUCH_KEY_CFG_H__
#ifdef __cplusplus
extern "C" {
#endif

typedef enum _TKY_QUEUE_ID
{
TKY_QUEUE_0 = 0,
TKY_QUEUE_1,
TKY_QUEUE_2,
TKY_QUEUE_3,
TKY_QUEUE_4,
TKY_QUEUE_5,
TKY_QUEUE_6,
TKY_QUEUE_7,
TKY_QUEUE_8,
TKY_QUEUE_9,
TKY_QUEUE_10,
TKY_QUEUE_11,

/* Add new above this */
TKY_QUEUE_END
} TKY_QUEUE_ID;

#define TKY_FILTER_MODE     			            3
#define TKY_FILTER_GRADE     			            4
#define TKY_BASE_REFRESH_ON_PRESS     			    0
#define TKY_BASE_UP_REFRESH_DOUBLE     			    0
#define TKY_BASE_DOWN_REFRESH_SLOW     			    0
#define TKY_BASE_REFRESH_SAMPLE_NUM     			1000
#define TKY_SHIELD_EN     			                0
#define TKY_SINGLE_PRESS_MODE     			        1
#define TKY_MAX_QUEUE_NUM     			            12

#define GEN_TKY_CH_INIT(qNum,chNum,chTime,disChTime,slpmode,chBaseline,trs,trs2) \
    {\
     .queueNum=qNum,.channelNum=chNum,.chargeTime=chTime,.disChargeTime=disChTime,\
     .sleepStatus=slpmode,\
     .baseLine = chBaseline,\
     .threshold=trs,\
     .threshold2=trs2\
    }

#define TKY_CHS_INIT \
				GEN_TKY_CH_INIT(TKY_QUEUE_0,3,3,3,0,3382,65,45),\
				GEN_TKY_CH_INIT(TKY_QUEUE_1,11,3,3,0,3223,68,46),\
				GEN_TKY_CH_INIT(TKY_QUEUE_2,13,3,3,0,3621,65,53),\
				GEN_TKY_CH_INIT(TKY_QUEUE_3,2,3,3,0,3600,67,54),\
				GEN_TKY_CH_INIT(TKY_QUEUE_4,9,3,3,0,3360,65,55),\
				GEN_TKY_CH_INIT(TKY_QUEUE_5,0,2,3,0,3649,86,53),\
				GEN_TKY_CH_INIT(TKY_QUEUE_6,4,3,3,0,3233,65,48),\
				GEN_TKY_CH_INIT(TKY_QUEUE_7,8,3,3,0,3604,61,46),\
				GEN_TKY_CH_INIT(TKY_QUEUE_8,12,3,3,0,3214,65,48),\
				GEN_TKY_CH_INIT(TKY_QUEUE_9,1,3,3,0,3284,66,52),\
				GEN_TKY_CH_INIT(TKY_QUEUE_10,5,3,3,0,3221,62,48),\
				GEN_TKY_CH_INIT(TKY_QUEUE_11,10,3,3,0,3611,60,42)


        /* Add new above this */

//***********************************************************
#ifdef __cplusplus
}
#endif

#endif /* __TOUCH_KEY_CFG_H__ */
