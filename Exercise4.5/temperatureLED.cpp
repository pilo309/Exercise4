#include "temperatureLED.h"
#include <stdio.h>
#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

//Exercise 4.5 Termometer - RPi
//Skriv et lille program som viser temperaturen vha.lysdioderne på RPi’en.
//Hvis temperauren er større end eller lig med 22 gr.skal der lyse en grøn lysdiode.
//Hvis temperaturen er større end eller lig med 23 gr.skal der lyse to grønne
//lysdioder.Osv.Dvs.at hvis temperaturen er større end eller lig med 27 gr.skal alle
//6 lysdioder lyse.Temperaturen skal måles og lysdioderne opdateres en gang pr.
//sek.Programmet skal forsætte indtil der trykkes på en tast på PC tastaturet.

void temperatureLED(void)
{
	double temperature = getTemperature();

	if (temperature >= 22)
		ledOn(LD1);
	if (temperature >= 23)
		ledOn(LD2);
	if (temperature >= 24)
		ledOn(LD3);
	if (temperature >= 25)
		ledOn(LD4);
	if (temperature >= 26)
		ledOn(LD5);
	if (temperature >= 27)
		ledOn(LD6);

	Wait(1000);

	for (int i = 1; i <= 6; i++)
	{
		ledOff(i);
	}


}