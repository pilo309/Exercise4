#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "keyboardLED.h"

//Exercise 4.6 Styring af lysdioder _ RPi
//Du skal lave et program der t�nder / slukker lysdioderne p� RPi som reaktion p� at
//brugeren trykker en tast p� PC'ens tastatur. Tasterne fra '1' til '6' skal t�nde de
//respektive lysdioder LD1 til LD6.Tasten '0' skal stoppe programmet.I f�rste
//udgave(version 1.0) af programmet skal man ikke kunne slukke lysdioderne.

//Version 1.1
//N�r en lysdiode t�ndes, skal den forrige, der blev t�ndt, slukkes.

//Version 1.2
//Tasterne "toggler" den tilsvarende lysdiode, uden at �ndre p� de andre.
//Dvs., n�r en lysdiode er slukket, og dens tast trykkes, skal den t�ndes, og
//omvendt. (HINT 4C).

//Version 1.3
//I stedet for en switch, kan man "regne" sig frem til hvilken lysdiode, der
//skal t�ndes eller slukkes.Parameterv�rdierne PD1 til PD6 til ledOn() og
//ledOff() d�kker jo over tallene 1 til 6. Tegnene '1' til '6' har ASCII v�rdierne 49 til 54. Kan du skrive noget kode, der omregner fra ASCII v�rdi til
//lysdiodenummer ? (HINT 4D).
//Denne �ndring giver ikke s� meget mening, hvis lysdioden skal toggles,
//men pr�v �ndringen p� version 1.0 eller version 1.1.

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	keyboardLED();

	return 0;
}