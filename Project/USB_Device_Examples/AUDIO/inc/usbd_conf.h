/**
  ******************************************************************************
  * @file    usbd_conf.h
  * @author  MCD Application Team
  * @version V1.1.0
  * @date    19-March-2012
  * @brief   USB Device configuration file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_CONF__H__
#define __USBD_CONF__H__

/* Includes ------------------------------------------------------------------*/
#include "usb_conf.h"

/** @defgroup USB_CONF_Exported_Defines
  * @{
  */ 

/* Audio frequency in Hz */
#undef USBD_AUDIO_FREQ

#define USBD_AUDIO_FREQ (audio_dev.work_freq & 0x00ffffff)
#define USBD_AUDIO_MAX_FREQ 48000


#define DEFAULT_VOLUME                  65    /* Default volume in % (Mute=0%, Max = 100%) in Logarithmic values.
                                                 To get accurate volume variations, it is possible to use a logarithmic
                                                 coversion table to convert from percentage to logarithmic law.
                                                 In order to keep this example code simple, this conversion is not used.*/

/* Use this section to modify the number of supported interfaces and configurations.
   Note that if you modify these parameters, you have to modify the descriptors 
   accordingly in usbd_audio_core.c file */
#define AUDIO_TOTAL_IF_NUM              3
#define USBD_CFG_MAX_NUM                1
#define USBD_ITF_MAX_NUM                1
#define USB_MAX_STR_DESC_SIZ            200 

#define USBD_SELF_POWERED               

/**
  * @}
  */ 

/** @defgroup USB_AUDIO_Class_Layer_Parameter
  * @{
  */ 
#define AUDIO_OUT_EP                    0x01
#define AUDIO_FEED_UP_EP                     0x82

#define AUDIO_IN_EP 0x83

/**
  * @}
  */ 

/** @defgroup USB_CONF_Exported_Types
  * @{
  */ 
/**
  * @}
  */ 


/** @defgroup USB_CONF_Exported_Macros
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup USB_CONF_Exported_Variables
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup USB_CONF_Exported_FunctionsPrototype
  * @{
  */ 
/**
  * @}
  */ 


#endif //__USBD_CONF__H__

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

