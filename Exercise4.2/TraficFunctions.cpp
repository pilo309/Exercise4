#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include "TraficFunctions.h"

void dayProgram(void)
{
		ledOn(RED);
		Wait(waitredgreen);					//tænde rød lys dernæst gul
		ledOn(YELLOW);
		Wait(waityellow);
		ledOff(RED);
		ledOff(YELLOW);
		ledOn(GREEN);
		Wait(waitredgreen);					//grøn lys, og der tændes 
		ledOff(GREEN);

}

void nightProgram(void)
{
	ledOn(GREEN);
	
	if (keyPressed(P1) == 1 || getIntensity() < 70)   //tænde rød lys såfremt P1 trykkes eller lysintensitet
	{
		ledOff(GREEN);
		ledOn(YELLOW);
		Wait(waityellow);					//tænde rød lys dernæst gul
		ledOff(YELLOW);
		ledOn(RED);
		Wait(waitredgreen);					//grøn lys, og der tændes 
		ledOff(RED);
	}
}
