// ADC.c:  Shows how to use the 14-bit ADC.  This program
// measures the voltage from some pins of the EFM8LB1 using the ADC.
//
// (c) 2008-2018, Jesus Calvino-Fraga
//

#include <stdio.h>
#include <stdlib.h>
#include <EFM8LB1.h>
#include <lab4.h>
#define TRUE 1
void main (void)
{
    float voltage=0, tempCelsius=0;
	
    waitms(500); // Give PuTTy a chance to start before sending
    printf("\x1b[2J"); // Clear screen using ANSI escape sequence.

    InitPinADC(2, 2); // Configure P2.2 as analog input
    InitADC();

	while(TRUE)
	{
		voltage = Volts_at_Pin(QFP32_MUX_P2_2);
		tempCelsius = 100.0*(voltage-2.73);
		printf ("%.3f\n", tempCelsius);
		waitms(500);
	 }  
	 
}	

