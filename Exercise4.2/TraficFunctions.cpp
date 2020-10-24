#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include "TraficFunctions.h"

void dayProgram(void)
{
		ledOn(RED);
		Wait(waitredgreen);					//t�nde r�d lys dern�st gul
		ledOn(YELLOW);
		Wait(waityellow);
		ledOff(RED);
		ledOff(YELLOW);
		ledOn(GREEN);
		Wait(waitredgreen);					//gr�n lys, og der t�ndes 
		ledOff(GREEN);

}

void nightProgram(void)
{
	ledOn(GREEN);
	
	if (keyPressed(P1) == 1 || getIntensity() < 70)   //t�nde r�d lys s�fremt P1 trykkes eller lysintensitet
	{
		ledOff(GREEN);
		ledOn(YELLOW);
		Wait(waityellow);					//t�nde r�d lys dern�st gul
		ledOff(YELLOW);
		ledOn(RED);
		Wait(waitredgreen);					//gr�n lys, og der t�ndes 
		ledOff(RED);
	}
}
