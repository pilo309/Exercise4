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


int main(void)
{

	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code


		do
		{

			temperatureLED();

		} while (!_kbhit());


	return 0;
}