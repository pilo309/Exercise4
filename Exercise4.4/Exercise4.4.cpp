#include <stdio.h>
#include "Header.h"
#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

//Exercise 4.4 Blinkefunktioner - RPi
//Skriv et modul(header - og sourcefil) med to funktioner som udfører hver sin blinkesekvens med en lysdiode på RPi’en.Du vælger helt selv hvilke blinke - sekvenser
//du vil have funktionerne til at udfører, men der skal være tydelig forskel på dem og
//den ene skal fortsætte i 5 sek.når den aktiveres og den anden i 10 sek.

int main(void)
{


		if (!Open())
		{
			printf("Error with connection\n");
			exit(1);
		}

		printf("Connected to Raspberry Pi\n");
		// To do your code

		while (1)
		{
			fivesec();

			Wait(500);

			tensec();
		}




	return 0;
}