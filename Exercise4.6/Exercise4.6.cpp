#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "keyboardLED.h"

//Exercise 4.6 Styring af lysdioder _ RPi
//Du skal lave et program der tænder / slukker lysdioderne på RPi som reaktion på at
//brugeren trykker en tast på PC'ens tastatur. Tasterne fra '1' til '6' skal tænde de
//respektive lysdioder LD1 til LD6.Tasten '0' skal stoppe programmet.I første
//udgave(version 1.0) af programmet skal man ikke kunne slukke lysdioderne.

//Version 1.1
//Når en lysdiode tændes, skal den forrige, der blev tændt, slukkes.

//Version 1.2
//Tasterne "toggler" den tilsvarende lysdiode, uden at ændre på de andre.
//Dvs., når en lysdiode er slukket, og dens tast trykkes, skal den tændes, og
//omvendt. (HINT 4C).

//Version 1.3
//I stedet for en switch, kan man "regne" sig frem til hvilken lysdiode, der
//skal tændes eller slukkes.Parameterværdierne PD1 til PD6 til ledOn() og
//ledOff() dækker jo over tallene 1 til 6. Tegnene '1' til '6' har ASCII værdierne 49 til 54. Kan du skrive noget kode, der omregner fra ASCII værdi til
//lysdiodenummer ? (HINT 4D).
//Denne ændring giver ikke så meget mening, hvis lysdioden skal toggles,
//men prøv ændringen på version 1.0 eller version 1.1.

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