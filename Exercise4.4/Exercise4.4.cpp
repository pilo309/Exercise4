#include <stdio.h>
#include "Header.h"
#pragma comment(lib, "RaspberryPI.lib")
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

//Exercise 4.4 Blinkefunktioner - RPi
//Skriv et modul(header - og sourcefil) med to funktioner som udf�rer hver sin blinkesekvens med en lysdiode p� RPi�en.Du v�lger helt selv hvilke blinke - sekvenser
//du vil have funktionerne til at udf�rer, men der skal v�re tydelig forskel p� dem og
//den ene skal forts�tte i 5 sek.n�r den aktiveres og den anden i 10 sek.

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