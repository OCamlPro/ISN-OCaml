//********************************************************************************
//*    lib_sen_moway.h                                                           *
//*    version: 2.0                                                              *
//*    This library contains all the necessary functions to gestionate the Moway *
//*    sensors.					                                                 *
//*    Copyright (C) 2010  Bizintek Innova S.L.                                  *
//*                                                                              *
//********************************************************************************
//*    This program is free software; you can redistribute it and/or modify      *
//*    it under the terms of the GNU General Public License as published by      *
//*    the Free Software Foundation; either version 3 of the License, or         *
//*    (at your option) any later version.                                       *
//*                                                                              *
//*    This program is distributed in the hope that it will be useful,           *
//*    but WITHOUT ANY WARRANTY; without even the implied warranty of            *
//*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
//*    GNU General Public License for more details.                              *
//*                                                                              *
//*    You should have received a copy of the GNU General Public License along   *
//*    with this program; if not, write to the Free Software Foundation, Inc.,   *
//*    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.               *
//********************************************************************************

#include "adc.h"		//A/D conversion library
#include "delays.h"		//Delays library

//********************
//*   DEFINITIONS   *
//********************

//Battery level

#define   MIN_BAT_ADC		   				132			//Mínimun of battery equal to 3.3 V
#define   MAX_BAT_ADC		   				162			//Máximun of battery equal to 4.2 V
#define   DIV_100_MAX_BAT_ADC_MIN_BAT_ADC   3

#define   ACCE_TAP_SENSI		   			0b01110000			
#define   ACCE_TAP_WINDOW		   			0b01111111			
#define   ACCE_TAP_LAT		   				0b00000100			

//*************************PORTA****************************//
#define   LIGHT_SEN		PORTAbits.RA0      	   		//PORTA,0
#define   IR_RX_L_1     PORTAbits.RA1	       		//PORTA,1
#define   LINE_RX_R     PORTAbits.RA2	       		//PORTA,2
#define   IR_RX_L_2     PORTAbits.RA3	       		//PORTA,3
#define   LINE_RX_L     PORTAbits.RA5	       		//PORTA,5

//*************************PORTB****************************//

#define   ACCE_INT1_DRDY	PORTBbits.RB1		   	//PORTB,1
#define   ACCE_INT2         PORTBbits.RB2		   	//PORTB,2
#define   SPEAKER           PORTBbits.RB3		   	//PORTB,3
#define   LED_TOP_RED       PORTBbits.RB5		   	//PORTB,5
#define   LED_TOP_GREEN     PORTBbits.RB6		   	//PORTB,6

//*************************PORTC****************************//
#define   LED_FRONT		PORTCbits.RC7            	//PORTC,7

//*************************PORTD****************************//
#define   LINE_TX		PORTDbits.RD1            	//PORTD,1
#define   ACCE_SDO		PORTDbits.RD4	   		  	//PORTD,4
#define   ACCE_SDI		PORTDbits.RD5	   		  	//PORTD,5
#define   ACCE_SCL		PORTDbits.RD6			  	//PORTD,6
#define   ACCE_CSN		PORTDbits.RD7	   		  	//PORTD,7

//*************************PORTE****************************//
#define   LED_BRAKE		PORTEbits.RE5	   			//PORTE,5

//*************************PORTF****************************//
#define   IR_RX_R_2     PORTFbits.RF5      			//PORTF,5
#define   IR_RX_R_1     PORTFbits.RF6      			//PORTF,6

//*************************PORTH****************************//
#define   NTC           PORTHbits.RH5       		//PORTH,5
#define	  BATTERY_IN   	PORTHbits.RH6       		//PORTH,6
#define   MIC_IN        PORTHbits.RH7       		//PORTH,7

//*************************PORTJ****************************//
#define   LED_IR        PORTJbits.RJ7       		//PORTJ,7
#define   IR_TX         PORTJbits.RJ6       		//PORTJ,6


//*************************TRISA****************************//
#define   LIGHT_SEN_TRIS       TRISAbits.TRISA0		//TRISA,0
#define   IR_RX_L_1_TRIS       TRISAbits.TRISA1		//TRISA,1
#define   LINE_RX_R_TRIS       TRISAbits.TRISA2		//TRISA,2
#define   IR_RX_L_2_TRIS       TRISAbits.TRISA3		//TRISA,3
#define   LINE_RX_L_TRIS       TRISAbits.TRISA5		//TRISA,5

//*************************TRISB****************************//
#define   ACCE_INT1_DRDY_TRIS  TRISBbits.TRISB1		//TRISB,1
#define   ACCE_INT2_TRIS       TRISBbits.TRISB2		//TRISB,2
#define   SPEAKER_TRIS         TRISBbits.TRISB3		//TRISB,3
#define   LED_TOP_RED_TRIS     TRISBbits.TRISB5		//TRISB,5
#define   LED_TOP_GREEN_TRIS   TRISBbits.TRISB6		//TRISB,6

//*************************TRISC****************************//
#define   LED_FRONT_TRIS       TRISCbits.TRISC7		//TRISC,7


//*************************TRISD****************************//
#define   LINE_TX_TRIS         TRISDbits.TRISD1		//TRISD,1
#define   ACCE_SDI_TRIS		   TRISDbits.TRISD5		//TRISD,5
#define   ACCE_SDO_TRIS		   TRISDbits.TRISD4		//TRISD,4
#define   ACCE_SCL_TRIS		   TRISDbits.TRISD6		//TRISD,6
#define   ACCE_CSN_TRIS		   TRISDbits.TRISD7		//TRISD,7

//*************************TRISE****************************//
#define   LED_BRAKE_TRIS	   TRISEbits.TRISE5		//TRISE,5

//*************************TRISF****************************//
#define   IR_RX_R_2_TRIS       TRISFbits.TRISF5		//TRISF,5
#define   IR_RX_R_1_TRIS       TRISFbits.TRISF6		//TRISF,6


//*************************TRISH****************************//
#define   NTC_TRIS             TRISHbits.TRISH5		//TRISH,5
#define	  BATTERY_TRIS         TRISHbits.TRISH6		//TRISH,6
#define   MIC_IN_TRIS          TRISHbits.TRISH7		//TRISH,7


//*************************TRISJ****************************//
#define   LED_IR_TRIS          TRISJbits.TRISJ7		//TRISJ,7
#define   IR_TX_TRIS           TRISJbits.TRISJ6		//TRISJ,6


//**********Accelerometer registers**********//
#define 	XOUT8		0x06
#define 	YOUT8		0x07
#define 	ZOUT8		0x08
#define 	DETSRC		0x0A
#define 	MCTL		0x16
#define 	INTRST		0x17
#define 	CTL1		0x18
#define 	PDTH		0x1B
#define 	PW			0x1C
#define 	LT			0x1D
#define 	TW			0x1E

//*********Variables to indicate the obstacle sensor to be checked**********//
#define		OBS_CENTER_L	0
#define		OBS_SIDE_L		1
#define		OBS_CENTER_R	2
#define		OBS_SIDE_R		3

//*********Variables to indicate the accelerometer axes to be checked**********//
#define 	ACCE_CHECK_X	0
#define 	ACCE_CHECK_Y	1
#define 	ACCE_CHECK_Z	2
	
//*********Variables to indicate the line to be checked**********//
#define 	LINE_L			0
#define		LINE_R			1

//*********Variables to check speaker mode**********//
#define		SPEAKER_OFF		0		
#define		SPEAKER_ON		1		
#define 	SPEAKER_TIME	2		


//**************
//*   CODE	   *
//**************
//Internal function
void 			Delay10TCYx (unsigned char);
void 			Delay10KTCYx (unsigned char);
void 			ACCE_WRITE(unsigned char, unsigned char);
unsigned char 	ACCE_READ(unsigned char);



//*****************************************************
//*                  SEN_CONFIG()                     *
//*****************************************************
//*Descripción: The function configurates the pic I/Os*
//* 			and the ADC.                          *
//*****************************************************
//*Input variables:                                   *
//*Output variables:                                  * 
//*****************************************************
void SEN_CONFIG(void)
{
	//Variables
	unsigned char ACCE_ADRESS=0;
	unsigned char ACCE_DATA_OUT=0;

	//Disable vref circuit
	CVRCON=0b00000000;
	
    //Disable parallel port
	PMCONH=0b00000000;

	//Disable the comparator
	CM1CON=0b00000000;
	CM2CON=0b00000000;

     //ADC configuration
	WDTCONbits.ADSHR=0;
	ADCON0=0b00000000;
	ADCON1=0b00100011;
	
	WDTCONbits.ADSHR=1;
	ANCON0=0b11111111;		
	ANCON1=0b11111111;		
	WDTCONbits.ADSHR=0;
		
	//Disable PLL
	OSCTUNEbits.PLLEN=0;


		//TRIS configuration
	//***********TRISA************//
	LIGHT_SEN_TRIS=1;   
 	LINE_RX_R_TRIS=1; 
  	LINE_RX_L_TRIS=1;  
	IR_RX_L_2_TRIS=1;  
	IR_RX_L_1_TRIS=1; 
      
	//***********TRISE************//
	LED_BRAKE_TRIS=0; 

	//***********TRISC************//
	LED_FRONT_TRIS=0;   
	
	//***********TRISB************//
	LED_TOP_RED_TRIS=0;
	LED_TOP_GREEN_TRIS=0; 
	SPEAKER_TRIS=0;  
	
	//***********TRISD************//
	LINE_TX_TRIS=0; 
	
	//***********TRISF************//
	IR_RX_R_1_TRIS=1;  
	IR_RX_R_2_TRIS=1; 
	
	//***********TRISJ************//
	LED_IR_TRIS=0;  
  	IR_TX_TRIS=0;  
	
	//***********TRISH************//
	NTC_TRIS=1;
	BATTERY_TRIS=1;
	MIC_IN_TRIS=1;


	//SPI configuration
	//I/O Configuration
	//***********TRISD************//
	ACCE_SDI_TRIS=1;		   
	ACCE_SDO_TRIS=0;		   
	ACCE_SCL_TRIS=0;		   
	ACCE_CSN_TRIS=0;
		   
	//***********TRISB************//
	ACCE_INT1_DRDY_TRIS=1;
	ACCE_INT2_TRIS=1;
	PMCONH=0b00000000;
	ACCE_CSN=1;
	
	//SPI module configuration
	SSP2STAT=0b11000000;
	SSP2CON2=0b00000000;
	SSP2CON1=0b00100000;

	//Accelerometer configuration for the pulse detection
	ACCE_ADRESS=MCTL;	
	ACCE_DATA_OUT= 0b01000011 ;	//b'01000011';
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );	

	//Configuratio for TAP
	//Sense configuration
	ACCE_ADRESS=PDTH;
	ACCE_DATA_OUT=ACCE_TAP_SENSI ;
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );

	//Pulse window
	ACCE_ADRESS=PW;
	ACCE_DATA_OUT=ACCE_TAP_WINDOW;
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );

	//Latency with the second pulse
	ACCE_ADRESS=LT;
	ACCE_DATA_OUT=ACCE_TAP_LAT;
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );		

	//Second pulse window
	ACCE_ADRESS=TW;
	ACCE_DATA_OUT=ACCE_TAP_WINDOW;
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );	

	//Interruptions assignment
	ACCE_ADRESS=CTL1;
	ACCE_DATA_OUT=0b00000100;	//b'00000100';
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT );	


	//***********PORTB************//
	//Green LED is off
	LED_TOP_GREEN=1;	
	//Red LED is off
	LED_TOP_RED=1;	
	
	//***********PORTE************//
	//Brake LED is off
	LED_BRAKE=0;

	//***********PORTC************//	
	//Front LED is off
	LED_FRONT=1;   

}
//*****************************************************



//*****************************************************
//*                  SEN_LIGHT                        *
//*****************************************************
//*		Description:It returns the light percentage   *
//* 		from the light sensor (0-100)             *
//*****************************************************
//*Input variables:                                   *
//*Output variables: -SEN_LIGHT_P                     *
//*****************************************************
unsigned char SEN_LIGHT(void){
	
   //Variables
   unsigned char SEN_LIGHT_P=0;

   //The ADC channel 0 is selected  
   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH0 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_1ANA);
   //It is necessary to wait until the conversion is completely done
	ConvertADC();
   while( BusyADC() ); // Hasta que no se complete no continua con el programa
   
   //Reading and calculation of the percentage of the incident light
   SEN_LIGHT_P = ADRESH/2; 	

   //A/D conversion is disabled
   CloseADC(); 
  
   //It returns percentage of the incident light 
   return (SEN_LIGHT_P);
	
}
//*****************************************************

 

//*****************************************************
//*                  SEN_BATTERY                      *		
//*****************************************************
//*Description:It returns the battery level           *
//*****************************************************
//*Input variables:                                   *
//*Output variables: -SEN_BATTERY_P                   *
//*****************************************************

unsigned char SEN_BATTERY(void)
{  
	//Variables
	unsigned char SEN_BATTERY_P=0;

	//The ADC channel 14 is selected 
	OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH14 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_15ANA);
	//It is necessary to wait until the conversion is completely done
	ConvertADC(); 	
    while( BusyADC() ); 

	//Reading and calculation of the battery level
    SEN_BATTERY_P = ADRESH; 

	if(SEN_BATTERY_P<MAX_BAT_ADC)
	{
		if(SEN_BATTERY_P> MIN_BAT_ADC)
		{
			SEN_BATTERY_P=(SEN_BATTERY_P-MIN_BAT_ADC)*DIV_100_MAX_BAT_ADC_MIN_BAT_ADC;
		}
		else
		{
			SEN_BATTERY_P = 0;
		}
	}
	else
	{
		SEN_BATTERY_P = 100;
	}

	//A/D conversion is disabled
	CloseADC(); 

	//It returns the battery level
	return (SEN_BATTERY_P);
}
//*****************************************************



//*****************************************************
//*                  SEN_TEMPERATURE                  *
//*****************************************************
//*Description:It returns the temperature  		      *
//*****************************************************
//*Input variables:                                   *
//*Output variables: -SEN_TEMPERATURE_P               *
//*****************************************************
unsigned char SEN_TEMPERATURE (void)
{
	//Variables
	int SEN_TEMPERATURE_C=0;

   	//The ADC channel 13 is selected 
	OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH13 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_14ANA);
	ConvertADC();  
    while( BusyADC() ); //It is necessary to wait until the conversion is completely done

	//Reading and calculation of temperature
    SEN_TEMPERATURE_C = ADRESH; 

	//It checks if the value is ok and it calculates the percentage
	SEN_TEMPERATURE_C = (SEN_TEMPERATURE_C - 69);
	if(SEN_TEMPERATURE_C>0)
	{
		SEN_TEMPERATURE_C=(SEN_TEMPERATURE_C*10)/23;
	}
	else
	{
		SEN_TEMPERATURE_C = 0;
	}

	//A/D conversion is disabled
    CloseADC();

	//It returns the battery level
	return (SEN_TEMPERATURE_C);

}
//*****************************************************



//*****************************************************
//*                  SEN_MIC_ANALOG                   *		
//*****************************************************
//*			Description:It returns the analog         *
//*				value form the microphone      		  *
//*****************************************************
//*Input variables:                                   *
//*Output variables: -SEN_MIC                         *
//*****************************************************

unsigned char SEN_MIC_ANALOG (void)
{
		//Variables
	unsigned char SEN_MIC=0;

   	//The ADC channel 15 is selected 
	OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH15 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_15ANA);
	ConvertADC(); 	
    while( BusyADC() ); 	//It is necessary to wait until the conversion is completely done

	//Reading of microphone
    SEN_MIC = ADRESH; 

	//A/D conversion is disabled
    CloseADC(); 

	//It returns the microphone value
	return (SEN_MIC);

}
//*****************************************************



//*****************************************************
//*                  SEN_MIC_DIG                      *	
//*****************************************************	
//*			Description:It returns the digital        *
//*				value of the microphone   		  	  *
//*****************************************************
//*Input variables:                                   *
//*Output variables: -SEN_MIC                         *
//*****************************************************

unsigned char SEN_MIC_DIG (void)
{
	WDTCONbits.ADSHR=1;
	ANCON0=0b11111111;
	ANCON1=0b11111111;
	WDTCONbits.ADSHR=0;
	//It returns the microphone value
	return (MIC_IN);
}
//*****************************************************



//*****************************************************
//*                  SEN_SPEAKER                      *	
//*****************************************************
//* Description:It activates the buzzer to the        * 
//*			indicated time and frequency     		  *
//*****************************************************
//*Input variables:      -SEN_SPEAKER_FREQ            *          
//*					   	 -SEN_SPEAKER_TIME  (100ms)   *                           
//*					   								  *
//*Output variables:                                  *
//*****************************************************
unsigned char SEN_SPEAKER ( unsigned char SEN_SPEAKER_FREQ, unsigned char SEN_SPEAKER_TIME, unsigned char SEN_SPEAKER_ON_OFF)
{
		//It checks if the received time is ok or not (0-255)
	if(SEN_SPEAKER_ON_OFF==SPEAKER_TIME && SEN_SPEAKER_TIME==0)
		return(0);
	//PR2 controls the frequency
	PR2=SEN_SPEAKER_FREQ;	
	
	//CCPR2L controls the duty
	SEN_SPEAKER_FREQ=SEN_SPEAKER_FREQ & 0b11111110;	
	CCPR2L=(SEN_SPEAKER_FREQ>>1); 	
		
	SPEAKER=0;
		
	T2CONbits.TMR2ON=1;
	T2CONbits.T2CKPS0=1;
	T2CONbits.T2CKPS1=1;
	
	if(SEN_SPEAKER_ON_OFF==SPEAKER_ON || SEN_SPEAKER_ON_OFF==SPEAKER_TIME)
		CCP2CON=0x3F;	
		
	while(SEN_SPEAKER_TIME>0 && SEN_SPEAKER_ON_OFF==SPEAKER_TIME) 	
	{
		Delay10KTCYx (10);		//Delay of 100 ms
		SEN_SPEAKER_TIME--;
	}
	if(SEN_SPEAKER_ON_OFF==SPEAKER_TIME || SEN_SPEAKER_ON_OFF==SPEAKER_OFF)
	   	CCP2CON=0;

	return(1);
}
//*****************************************************



//*****************************************************
//*               SEN_OBS_ANALOG()                    *
//*****************************************************
//*  Description: It returns if an obstacle has been  *
//*  detected on the right or left side of the Moway. *
//*****************************************************
//*Input variables:     -OBS_SIDE_L                   *
//*						-OBS_CENTRAL_L                *
//*						-OBS_CENTRAL_R	              *			
//*						-OBS_SIDE_R					  *                             
//*Output variables:   -SEN_OBS_CENTER_R              *
//*                     -SEN_OBS_CENTER_L			  *
//*						-SEN_OBS_SIDE_R               *
//*                     -SEN_OBS_SIDE_L               *
//*Output:              -0:External signal detected   *
//                        (Moway or interference)     *
//                      -(1-255):Correct reading      *
//*****************************************************

unsigned char SEN_OBS_ANALOG(unsigned char OBS_TO_CHECK)
{
	//Variables
	unsigned char SENSOR=0;
	
	//It checks which of the four sensors is going to be tested
	switch(OBS_TO_CHECK){
		
		case OBS_SIDE_L:
	
		   //Verification of non-existence of external signal
		   if((IR_RX_L_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }
		
		    //The ADC channel 3 is selected
		   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH3 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_4ANA);

		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Se espera 120 us
		
		   //It is necessary to wait until the conversion is completely done
		   ConvertADC(); 
		   while( BusyADC() );
		
		   //Reading of the left side sensor
		   SENSOR=ADRESH;
		   	
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us
		
		   //A/D conversion is disabled
		   CloseADC(); 

		   //Verification of non-existence of external signal
		   if((IR_RX_L_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }

		   break;

	case OBS_CENTER_L:

		   //Verification of non-existence of external signal 
		   if((IR_RX_L_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us	
		   SENSOR=0;
		   break;
		   }
		
		   //The ADC channel 1 is selected
		   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH1 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_2ANA);

		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
		
		   //It is necessary to wait until the conversion is completely done
		   ConvertADC(); 
		   while( BusyADC() ); 
		
		   //Reading of the left central sensor
		   SENSOR=ADRESH;
		   	
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us
		
		   //A/D conversion is disabled
		   CloseADC();

		   //Verification of non-existence of external signal
		   if((IR_RX_L_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us	
		   SENSOR=0;
		   break;
		   } 	
	
		   break;		

		case OBS_CENTER_R:
		
		   //Verification of non-existence of external signal 
		   if((IR_RX_R_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }
		
		   //The ADC channel 11 is selected
	       OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH11 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_12ANA);

		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
		
		   //It is necessary to wait until the conversion is completely done
		   ConvertADC(); 
		   while( BusyADC() ); 
		
		   //Reading of the right central sensor
		   SENSOR=ADRESH;
		   	
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us
		
		   
		   //A/D conversion is disabled
		   CloseADC(); 	

		   //Verification of non-existence of external signal 
		   if((IR_RX_R_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }	   
	
		   break;
	
		case OBS_SIDE_R:

		   //Verification of non-existence of external signal
		   if((IR_RX_R_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }
		
		   //The ADC channel 10 is selected
		   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH10 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_11ANA);

		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
		
		   //It is necessary to wait until the conversion is completely done
		   ConvertADC(); 
		   while( BusyADC() ); 
		
		   //Reading of the right side sensor
		   SENSOR=ADRESH;
		   	
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us
		
		   //A/D conversion is disabled
		   CloseADC(); 

		   //Verification of non-existence of external signal 
		   if((IR_RX_R_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
		   }

		   break; 
		default:
			return(0);
	}
	//The value of the sensor is returned
	return (SENSOR);
	
}
//*****************************************************



unsigned char SEN_OBS_DIG (unsigned char OBS_TO_CHECK){

	//Variables
	unsigned char SENSOR=0;
   
	WDTCONbits.ADSHR=1;
	ANCON0=0b11111111;
	ANCON1=0b11111111;
	WDTCONbits.ADSHR=0;

   	//It checks which of the four sensors is going to be tested

	switch (OBS_TO_CHECK){

		case OBS_SIDE_L:

		   //Verification of non-existence of external signal 
		   if((IR_RX_L_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
	
		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
	
		   //Reading of the left side sensor
		   SENSOR=IR_RX_L_2;
			
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us		
	
		   //Verification of non-existence of external signal 
	       if((IR_RX_L_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
		   break;
	 
   		case OBS_CENTER_L:
	
		   //Verification of non-existence of external signal 
		   if((IR_RX_L_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
	
		   //Se manda pulso de luz infrarroja para la deteción de obstáculo
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
	
		   //Reading of the left central sensor	   
		   SENSOR=IR_RX_L_1;
			
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us		
	
		   //Verification of non-existence of external signal 
	       if((IR_RX_L_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
		   break;
	   
		case OBS_CENTER_R:
			
		   //Verification of non-existence of external signal 
		   if((IR_RX_R_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
	
		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
	
		   //Reading of the right central sensor
		   SENSOR=IR_RX_R_1;
			
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us		
	
		   //Verification of non-existence of external signal 
	       if((IR_RX_R_1)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   	   }
		   break;

		case OBS_SIDE_R:
	
		   //Verification of non-existence of external signal 
		   if((IR_RX_R_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   		}
	
		   //An infrared light pulse is sent for the obstacle detection
		   IR_TX=1;
		   Delay10TCYx (12);		//Delay of 120 us
	
		   //Reading of the right side sensor
	       SENSOR=IR_RX_R_2;
	    	
		   //The end of the infrared light pulse
		   IR_TX=0;
		   Delay10TCYx (50);		//Delay of 500 us		
	
		   //Verification of non-existence of external signal 
	       if((IR_RX_R_2)!=0){
		   Delay10TCYx (50);		//Delay of 500 us
		   SENSOR=0;
		   break;
	   		}
		   break;
		default:
			return(0);
	}
		
	//The value of the sensor ios returned
	return (SENSOR);
	
}
//*****************************************************



//*****************************************************
//*                 SEN_ACCE_XYZ_READ                 *
//*****************************************************
//*	   Description: It returns the accelerometer      *
//*					x,y,z value.                      *
//*****************************************************
//*Input variables:     -ACCE_CHECK_X				  *
//*						-ACCE_CHECK_Y				  *
//*						-ACCE_CHECK_Z				  *
//*Output variables:    -SEN_ACCE_X                   *
//*                     -SEN_ACCE_Y                   *
//*                     -SEN_ACCE_Z                   *
//*Output:			   	 					 		  *
//*		 	              -0:Incorrect reading	  	  *
//*                       -(1-255):Correct reading    *
//*****************************************************

unsigned char SEN_ACCE_XYZ_READ(unsigned char ACCE_TO_CHECK)
{
	//Variables
	unsigned char SENSOR=0;
	unsigned char ACCE_ADRESS=0;
	unsigned char ACCE_DATA_OUT=0;
	unsigned char ACCE_NO_HIGH=255;
	unsigned char ACCE_NO_LOW=255;
	unsigned char ACCE_DATA_IN=0;

	//The accelerometer is turn on "measure" mode
	ACCE_ADRESS=MCTL;
	ACCE_DATA_OUT=0b00000101;
	ACCE_WRITE(ACCE_ADRESS,ACCE_DATA_OUT);	
	
	//It checks if the axes are calculated on time
	while(ACCE_NO_HIGH>=0)
	{
		ACCE_NO_LOW--;
		while(ACCE_NO_LOW>=0)
		{
			if(ACCE_INT1_DRDY==1)
			{
				break;
			}
			else{ ACCE_NO_LOW--; }
		}
		if(ACCE_INT1_DRDY==1){ break;}
		ACCE_NO_HIGH--;
		if(ACCE_NO_HIGH==0)
		{
			//The accelerometer goes back to "pulse detection" mode
			ACCE_ADRESS=MCTL;
			ACCE_DATA_OUT=0b01000011;
			ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT);

			return (0);
					
		}
		else
		{
			ACCE_NO_LOW=255;
		}
	}

	//It selects the axes to be calculated
	switch (ACCE_TO_CHECK){
		case ACCE_CHECK_X:
	
			//X reading 
			ACCE_ADRESS=XOUT8;
			ACCE_DATA_IN=ACCE_READ(ACCE_ADRESS);
			SENSOR= ACCE_DATA_IN ^ 0b10000000;

			break;
		
		case ACCE_CHECK_Y:
	
			//Y reading
			ACCE_ADRESS=YOUT8;
			ACCE_DATA_IN=ACCE_READ(ACCE_ADRESS);
			SENSOR=ACCE_DATA_IN ^ 0b10000000;
	
			break;

		case ACCE_CHECK_Z:
	
			//Z reading
			ACCE_ADRESS=ZOUT8;
			ACCE_DATA_IN=ACCE_READ(ACCE_ADRESS);
			SENSOR=ACCE_DATA_IN ^ 0b10000000;
			
			break;
	}
		

	//The accelerometer goes back to "pulse detection" mode
	ACCE_ADRESS=MCTL;
	ACCE_DATA_OUT=0b01000011;
	ACCE_WRITE(ACCE_ADRESS, ACCE_DATA_OUT);
			
	return (SENSOR);
	
}
//;*****************************************************



//;*****************************************************
//;*                 SEN_ACCE_CHECK_TAP          	   *	
//;*****************************************************
//;*Description: It verifies if Moway has beaten on not*
//;*****************************************************
//;*Input variables:                                   *
//;*Output variables: -SEN_ACCE_TAP	                   *
//;*****************************************************
unsigned char SEN_ACCE_CHECK_TAP(void)
{
	//Variables
	unsigned char ACCE_ADRESS=0;
	unsigned char SEN_ACCE_TAP=0;
	unsigned char ACCE_DATA_OUT=0;								
	unsigned char ACCE_DATA_IN=0;

	//Reading of the interruptions register
	ACCE_ADRESS=DETSRC;
	ACCE_DATA_IN=ACCE_READ(ACCE_ADRESS);
	SEN_ACCE_TAP= ACCE_DATA_IN & 0b00000011;

	//It checks if it is a Tap or a Tap tap
	if(SEN_ACCE_TAP==0b00000011 || SEN_ACCE_TAP==0b00000010)
	{
		SEN_ACCE_TAP=SEN_ACCE_TAP & 0b00000010;
		
	}
	
	//Interruptions cleaning
	ACCE_ADRESS=INTRST;
	ACCE_DATA_OUT=0b00000011;
	ACCE_WRITE(ACCE_ADRESS,ACCE_DATA_OUT);		

	//Interruptions cleaning
	ACCE_ADRESS=INTRST;
	ACCE_DATA_OUT=0b00000000;
	ACCE_WRITE(ACCE_ADRESS,ACCE_DATA_OUT);		

	Delay10KTCYx (5);	//Delay of 50 ms
	Delay10KTCYx (5);	//Delay of 50 ms
	Delay10KTCYx (5);	//Delay of 50 ms
	Delay10KTCYx (5);	//Delay of 50 ms
	Delay10KTCYx (5);	//Delay of 50 ms

	//It return the value: 0 if it is a tap_tap and 1 if it is an only tap
	return (SEN_ACCE_TAP);
		

}
//*****************************************************



//*****************************************************
//*               SEN_LINE_ANALOG()                   *		
//*****************************************************
//*Description: It returns the clarity of the floor.  *
//*It can differenciate colors depending on the       *
//*material.                                          *
//*****************************************************
//*Input variables:     -LINE_R				     	  *
//*						-LINE_L                       *
//*Output variables:    -SEN_LINE_R                   *
//*                     -SEN_LINE_L                   *
//*****************************************************

unsigned char SEN_LINE_ANALOG (unsigned char LINE_TO_CHECK){	

	//Variables
	unsigned char SENSOR=0;

	//It selects the line to be checked
	switch (LINE_TO_CHECK){
		case LINE_R:

		   //The ADC channel 2 is selected
		   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH2 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_3ANA);
		   	break;
		case LINE_L:

		   //The ADC channel 4 is selected
		   OpenADC(ADC_FOSC_4 & ADC_LEFT_JUST & ADC_0_TAD, ADC_CH4 & ADC_INT_OFF & ADC_VREFPLUS_VDD & ADC_VREFMINUS_VSS ,ADC_5ANA);
			break;
	}
	
   //An infrared light pulse is sent for the line detection
   LINE_TX=1;
   Delay10TCYx (90);		//Delay of 900 us

   //It is necessary to wait until the conversion is completely done	
   ConvertADC(); 
   while( BusyADC() );

   //Reading of the value
   SENSOR = ADRESH; 
    	

   //The end of the infrared light pulse
   LINE_TX=0;
	
   //A/D conversion is disabled
   CloseADC();

   //It returns the value of the sensor
   return (SENSOR);
}
//*****************************************************



//*****************************************************
//*               SEN_LINE_DIG()                      *		
//*****************************************************
//*Description: It returns if it has detected a black * 
//*line in a white floor.                             *
//*****************************************************
//*Input variables:     -LINE_R						  *
//*						-LINE_L                       *                 
//*Output variables:    -SEN_LINE_R                   *
//*                     -SEN_LINE_L                   *
//*****************************************************
unsigned char SEN_LINE_DIG(unsigned char LINE_TO_CHECK){

	//Variables
	unsigned char SENSOR=0;
	

	WDTCONbits.ADSHR=1;
	ANCON0=0b11111111;
	ANCON1=0b11111111;
	WDTCONbits.ADSHR=0;

	//An infrared light pulse is sent for the line detection
	LINE_TX=1;
    Delay10TCYx (90);		//Delay of 900 us
 	
	//It selects the line to be checked
	switch (LINE_TO_CHECK){
	
	   case LINE_R:
	   
	   //Reading of the value of the right line
	   SENSOR=LINE_RX_R;
		break;
	   case LINE_L:

	   //Reading of the value of the left line
	   SENSOR=LINE_RX_L;
		break;
	}

	//The end of the infrared light pulse
  	  LINE_TX=0;
		
	//It returns the value of the sensor
	return (SENSOR);
}



//*****************************************************
//*                   LED_xx_xx()                     *				
//*****************************************************
//*Description: Functions for the use of the LEDs     *
//*****************************************************
//*Input variables:                                   *
//*Output variables:                                  *
//*****************************************************

//The switch on of the front LED
void LED_FRONT_ON(void){
   LED_FRONT=0;
}
//The switch off of the front LED
void LED_FRONT_OFF(void){
   LED_FRONT=1;
}
//The blinking of the front LED
void LED_FRONT_ON_OFF(void){
   LED_FRONT=0;
   Delay10KTCYx (5);	//Se espera 50 ms
   LED_FRONT=1;
   Delay10KTCYx (5);	//Se espera 50 ms
}
//The switch on of the brake LED
void LED_BRAKE_ON(void){
  LED_BRAKE=1;
}
//The switch off of the brake LED
void LED_BRAKE_OFF(void){
   LED_BRAKE=0;
}
//The blinking of the brake LED
void LED_BRAKE_ON_OFF(void){
   LED_BRAKE=0;
   Delay10KTCYx (5);	//Se espera 50 ms
   LED_BRAKE=1;
   Delay10KTCYx (5);	//Se espera 50 ms
}
//The switch on of the top red LED
void LED_TOP_RED_ON(void){
   LED_TOP_RED=0;
}
//The switch off of the top red LED
void LED_TOP_RED_OFF(void){
   LED_TOP_RED=1;
}
//The blinking of the top red LED
void LED_TOP_RED_ON_OFF(void){
   LED_TOP_RED=0;
   Delay10KTCYx (5);	//Se espera 50 ms
   LED_TOP_RED=1;
   Delay10KTCYx (5);	//Se espera 50 ms
}
//The switch on of the top green LED
void LED_TOP_GREEN_ON(void){
   LED_TOP_GREEN=0;
}
//The switch off of the top green LED
void LED_TOP_GREEN_OFF(void){
   LED_TOP_GREEN=1;
}
//The blinking of the top green LED
void LED_TOP_GREEN_ON_OFF(void){
   LED_TOP_GREEN=0;
   Delay10KTCYx (5);	//Se espera 50 ms
   LED_TOP_GREEN=1;
   Delay10KTCYx (5);	//Se espera 50 ms
}
//*****************************************************

//*****************************************************
//*              ACCE_WRITE(data1, data2)			  *
//*****************************************************
//*		Description:Writting condition to  			  *
//* 	make possible the SPI communication.     	  *
//*****************************************************
void ACCE_WRITE(unsigned char data1, unsigned char data2)
{

	static unsigned char SEN_ACCE_BYTE_OUT_1;						
	static unsigned char SEN_ACCE_BYTE_OUT_2;	
	static unsigned char SEN_ACCE_BYTE_IN_2;	
	static unsigned char SEN_ACCE_BYTE_IN_1;

	ACCE_CSN_TRIS=0;
	ACCE_CSN=0;
	Delay10TCYx (90);					//Delay_900us
  	SEN_ACCE_BYTE_OUT_1=(data1<<1);
	SEN_ACCE_BYTE_OUT_1=SEN_ACCE_BYTE_OUT_1 | 0b10000000;                                                                                                                                                                                        
	SEN_ACCE_BYTE_OUT_2=data2;
	SSP2BUF=SEN_ACCE_BYTE_OUT_1;		//Load send data
	while(SSP2STATbits.BF!=1)	{};		//wait
	
	SEN_ACCE_BYTE_IN_1=SSP2BUF;			//Store received data

	SSP2BUF=SEN_ACCE_BYTE_OUT_2;		//Load send data
	while(SSP2STATbits.BF!=1)	{};		//wait

	SEN_ACCE_BYTE_IN_2=SSP2BUF;
	ACCE_CSN=1;
}
//*****************************************************


//*****************************************************
//*              ACCE_READ(dato3)			          *
//*****************************************************
//*		Description:Reading condition to 			  *
//* 	make possible the SPI communication.     	  *
//*****************************************************
unsigned char ACCE_READ(unsigned char data)
{
	static unsigned char SEN_ACCE_BYTE_OUT_1;						
	static unsigned char SEN_ACCE_BYTE_OUT_2;	
	static unsigned char SEN_ACCE_BYTE_IN_2;	
	static unsigned char SEN_ACCE_BYTE_IN_1;
	ACCE_CSN_TRIS=0;
	ACCE_CSN=0;
	Delay10TCYx (90);					//Delay_900us
	SEN_ACCE_BYTE_OUT_1=(data<<1);
	SEN_ACCE_BYTE_OUT_1=SEN_ACCE_BYTE_OUT_1 & 0b01111111;    
	SEN_ACCE_BYTE_OUT_2=0b00000000;
	SSP2BUF=SEN_ACCE_BYTE_OUT_1;		//Load send data
	while(SSP2STATbits.BF!=1)	{};		//wait
	
	SEN_ACCE_BYTE_IN_1=SSP2BUF;			//Store received data

	SSP2BUF=SEN_ACCE_BYTE_OUT_2;		//Load send data
	while(SSP2STATbits.BF!=1)	{};		//wait

	SEN_ACCE_BYTE_IN_2=SSP2BUF;
	ACCE_CSN=1;
	return (SEN_ACCE_BYTE_IN_2);
}

