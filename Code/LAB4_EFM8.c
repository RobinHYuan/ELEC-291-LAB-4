// ADC.c:  Shows how to use the 14-bit ADC.  This program
// measures the voltage from some pins of the EFM8LB1 using the ADC.
//
// (c) 2008-2018, Jesus Calvino-Fraga
//

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <EFM8LB1.h>
#include <lab4.h>
#define TRUE 1


void main (void)
{
	float voltage=0,Temp=0,Temp_LM355=0,Temp_DHT11=0,Hum_DHT11=0;
	char string[16];
	char percent='%';
	
    waitms(500); // Give PuTTy a chance to start before sending
	printf("\x1b[2J"); // Clear screen using ANSI escape sequence.
    InitADC();
	LCD_4BIT();
		
	while(1==1)
	{		
		DHT11_Read(&Temp_DHT11,&Hum_DHT11);	
		
		Temp_LM355=LM355_Read();
		
		Temp=0.8*Temp_DHT11+0.2*Temp_LM355;
			
		sprintf(string,"Hum= %.1f %c",Hum_DHT11,percent);
		LCDprint(string,1,1);
		sprintf(string,"Tem = %.1f",Temp);    
		LCDprint(string,2,1);
		
		printf ("%.3f\n", Temp);

		waitms(1000);

	}	
	
}	

