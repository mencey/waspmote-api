/*
 *  Copyright (C) 2009 Libelium Comunicaciones Distribuidas S.L.
 *  http://www.libelium.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 2.1 of the License, or
 *  (at your option) any later version.
   
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Version:		0.10
 *  Design:		David Gascón
 *  Implementation:	Alberto Bielsa, David Cuartielles
 */
  
 
#ifndef __WASPGPRSCONSTANTS_H__
#define __WASPGPRSCONSTANTS_H__

#include <inttypes.h> 

//char STR_SPRINTF[]= "%s%c%s%c";
//char STR1_SPRINTF[]= "%s%c%c%s";
char	AT_COMMAND[]=	"AT";
char AT_SHUTDOWN[]=  	"#SHDN";  // shutdown the device

// Calls Constants
char AT_CALL[]=      "D";  // start phonecall, needs phone number
char AT_CALL_R[]=   "OK";
char AT_HANG[]=      "H";  // hang phonecall, no parameters
char AT_HANG_R[]=    "OK";

// Voice Mode Constants
char AT_VOICE_MODE[]=  "+FCLASS=8";  // activate voice mode
char AT_VOICE_MODE_R[]=  "OK";
char	AT_ID_INCALL[]=	"+CLIP=1";
char	AT_ID_INCALL_R[]=	"OK";

// SMS Constants
char AT_SMS[]=       "+CMGS=";    // set phone number to send SMS to, needs phone number
char AT_SMS_R[]=     ">";
char	AT_SMS_TEXT_R[]=	"OK";
char AT_SMS_MODE[]=  "+CMGF=1";   // select text mode for SMS
char AT_SMS_MODE_R[]= "OK";
char AT_SMS_UNREAD[]=  "+CMGL=\"REC UNREAD\"";  // get the list of unread SMS messages
char AR_SMS_UNREAD_R[]=  "OK";
char	AT_SMS_INFO[]=	"+CNMI=2,1,0,0,0";
char	AT_SMS_INFO_R[]=	"OK";
char	AT_SMS_READ[]=	"+CMGR="; // needs index of sms to read
char	AT_SMS_READ_R[]=	"OK";

// Sound Constants
char AT_SOUND_INT[]=  "#CAP=2";   // set internal audio path
char AT_SOUND_INT_R[]=  "OK";
char AT_SOUND_EXT[]=  "#CAP=1";   // set external audio path
char AT_SOUND_EXT_R[]= "OK";
char AT_VOLUME_SET[]=  "+CLVL=";  // set volume for selected audio path, needs number (min)0..10(MAX)
char AT_VOLUME_SET_R[]=  "OK";

// SIM Constants
char AT_SIM_ACTIVATE[]=  "+CPBS=\"SM\"";  // set SIM card mode to the most basic one
char AT_SIM_ACTIVATE_R[]= "OK";
char AT_SIM_CHECK_NUMBERS[]=  "+CPBF=\"BSP\"";  // look for the numbers with the entry BSP in the SIM
char AT_SIM_CHECK_NUMBERS_R[]= "OK";
char AT_PIN[]=	"+CPIN=";
char AT_PIN_R[]=	"OK";

// Power Modes Constants
char POWER_HIBERNATE[]=	"*PSCPOF";
char	POWER_SLEEP[]=	"+KSLEEP=1";
char	POWER_R[]=		"OK";

// Reset Constants
char RESET_GPRS[]= "ATZ";
char RESET_GPRS_R[]= "OK";

// GPRS Constants
char AT_GPRS_PATTERN[]= "+KPATTERN=";
char	AT_GPRS_PATTERN_R[]= "OK";
char	GPRS_PATTERN[]=	"ENDMES";
char	AT_GPRS_CONN_CFG[]= "+KCNXCFG=";
char	AT_GPRS_CONN_CFG_R[]= "OK";
char	AT_GPRS[]= "GPRS";
//#define	AT_GPRS_APN "movistar.es"
char	AT_GPRS_APN[]= "internetmas";
//#define	AT_GPRS_LOGIN "MOVISTAR"
char	AT_GPRS_LOGIN[]= "";
// #define	AT_GPRS_PASSW "MOVISTAR"
char	AT_GPRS_PASSW[]= "";
char	AT_GPRS_IP[]= "0.0.0.0";
char	AT_GPRS_DNS1[]= "194.79.1.100";
char	AT_GPRS_DNS2[]= "194.79.1.101";
char	AT_GPRS_TCP_CFG[]= "AT+KTCPCFG=";
char	AT_GPRS_TCP_CFG_R[]= "OK";
char	AT_GPRS_TCP_CNX[]=	"AT+KTCPCNX=";
char	AT_GPRS_CNX_TIMER[]= "+KCNXTIMER=";
char	AT_GPRS_CNX_TIMER_R[]= "OK";
char	AT_GPRS_CNX_PROFILE[]= "+KCNXPROFILE=0";
char	AT_GPRS_CNX_PROFILE_R[]= "OK";
char	AT_GPRS_CHECK[]= "+CGATT=1";
char	AT_GPRS_CHECK_R[]= "OK";
char	AT_GPRS_TCP_SND[]= "AT+KTCPSND=";
char	AT_GPRS_TCP_SND_R[]= "OK";
char	AT_GPRS_TCP_RCV[]= "AT+KTCPRCV=";
char	AT_GPRS_TCP_RCV_R[]= "OK";
char	AT_GPRS_TCP_CLOSE[]= "+KTCPCLOSE=";
char	AT_GPRS_TCP_DEL[]= "+KTCPDEL=";
char AT_GPRS_TCP_DEL_R[]= "OK";
char AT_GPRS_TCP_CLOSE_R[]= "OK";
char	AT_GPRS_CELLID[]=	"+KCELL=0";
char	AT_GPRS_K3[]=	"&K3";
char	AT_GPRS_K3_R[]=	"OK";

// SMTP Constants
char	AT_SMTP_PARAM[]=		"+KSMTPPARAM=";
char	AT_SMTP_PARAM_R[]=		"OK";
char	AT_SMTP_PWD[]=		"+KSMTPPWD=";
char	AT_SMTP_PWD_R[]=		"OK";
char	AT_SMTP_TO[]=		"+KSMTPTO=";
char	AT_SMTP_TO_R[]=		"OK";
char	AT_SMTP_SUBJECT[]=		"+KSMTPSUBJECT=";
char	AT_SMTP_SUBJECT_R[]=	"OK";
char	AT_SMTP_SEND[]=		"+KSMTPUL=";
char	AT_SMTP_SEND_R[]=		"OK";

// POP3 Constants
char	AT_POP3_PARAM[]=		"+KPOPCNX=";
char	AT_POP3_PARAM_R[]=		"OK";
char	AT_POP3_LIST[]=		"AT+KPOPLIST";
char	AT_POP3_READ[]=		"AT+KPOPREAD=";
#define	MAX_SIZE_POP3		2048

// FTP Constants
char	AT_FTP_PARAM[]=		"+KFTPCFG=0";
char	AT_FTP_SEND[]=		"+KFTPSND=";
char	AT_FTP_RECV[]=		"+KFTPRCV=";
char	AT_FTP_CLOSE[]=		"+KFTPCLOSE=";
char	AT_FTP_CLOSE_R[]=		"OK";
#define	MAX_SIZE_FTP		1024

// IMEI - IMSI Constants
char AT_GPRS_IMEI[]= "AT+CGSN";
char AT_GPRS_IMSI[]= "AT+CIMI";


#endif
