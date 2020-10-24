#include "temperatureLED.h"
#include <stdio.h>
#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

//Exercise 4.5 Termometer - RPi
//Skriv et lille program som viser temperaturen vha.lysdioderne p� RPi�en.
//Hvis temperauren er st�rre end eller lig med 22 gr.skal der lyse en gr�n lysdiode.
//Hvis temperaturen er st�rre end eller lig med 23 gr.skal der lyse to gr�nne
//lysdioder.Osv.Dvs.at hvis temperaturen er st�rre end eller lig med 27 gr.skal alle
//6 lysdioder lyse.Temperaturen skal m�les og lysdioderne opdateres en gang pr.
//sek.Programmet skal fors�tte indtil der trykkes p� en tast p� PC tastaturet.


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