#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>
#include "TraficFunctions.h"

//Exercise 4.2 Trafikstyring � forbedret programstruktur

//a.Skriv et modul(header - og sourcefil) med to funktioner.Den ene skal
//hedde redToGreen() og skal f� �trafikstanderen� til at skifte fra r�d til
//gr�n.Den anden skal hedde greenToRed() og skal f� trafik - standeren til at
//skifte fra gr�n til r�d.

//b.Brug herefter disse to funktioner i din l�sning til exercise 3.4 (eller 3.5) fra
//sidste uge.
//NB!L�g m�rke til hvor meget det simplificerer din main - funktion � hvilket
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
				printf_s("\nDu er nu i dagstilstand. Tryk p� vilk�rlig tast for at afbryde program.\n");
				do
				{

				dayProgram();				//kalde vores dagsprogramsfunktion

				} while (!_kbhit());		//afbryde ved tryk p� tastatur
					

				break;



			case 'n':

				printf_s("Du er nu i nattilstand. Tryk p� vilkaarlig tast for at afbryde program.\n");

				do
				{
				
				nightProgram();			//kalde vores natprogram

				} while (!_kbhit());		//afbryde med keyboard

				break;

			case '0':				//indtastning af 0 p� tastatur
			{
				return 0;			//afslutter program

				break;
			}

		}
	}

	return 0;
}