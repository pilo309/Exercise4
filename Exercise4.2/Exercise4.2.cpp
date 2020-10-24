#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>
#include "TraficFunctions.h"

//Exercise 4.2 Trafikstyring – forbedret programstruktur

//a.Skriv et modul(header - og sourcefil) med to funktioner.Den ene skal
//hedde redToGreen() og skal få ”trafikstanderen” til at skifte fra rød til
//grøn.Den anden skal hedde greenToRed() og skal få trafik - standeren til at
//skifte fra grøn til rød.

//b.Brug herefter disse to funktioner i din løsning til exercise 3.4 (eller 3.5) fra
//sidste uge.
//NB!Læg mærke til hvor meget det simplificerer din main - funktion – hvilket
//jo betyder, at din kode bliver mere struktureret :-)

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	while (1)							// uendeligt loop iteration 3
	{

		char mode = 0;			//initialiserer vores tilstand

		printf_s("Indtast n for nattilstand og d for dagstilstand, 0 for at afslutte\n");
		mode = _getch();		//indtastning af tilstand

		switch (mode)
		{
			case 'd':
				printf_s("\nDu er nu i dagstilstand. Tryk på vilkårlig tast for at afbryde program.\n");
				do
				{

				dayProgram();				//kalde vores dagsprogramsfunktion

				} while (!_kbhit());		//afbryde ved tryk på tastatur
					

				break;



			case 'n':

				printf_s("Du er nu i nattilstand. Tryk på vilkaarlig tast for at afbryde program.\n");

				do
				{
				
				nightProgram();			//kalde vores natprogram

				} while (!_kbhit());		//afbryde med keyboard

				break;

			case '0':				//indtastning af 0 på tastatur
			{
				return 0;			//afslutter program

				break;
			}

		}
	}

	return 0;
}