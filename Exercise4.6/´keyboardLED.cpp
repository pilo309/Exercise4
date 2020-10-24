#include "keyboardLED.h"
#include <conio.h>

void keyboardLED(void)
{
	char ledNumber;
	int prevLED = 0;
	
	while (1)

	{

		printf_s("Enter LED number:\n");

		ledNumber = _getch();

		switch (ledNumber)
		{
		case '1':
			ledOn(1);
			ledOff(prevLED);
			prevLED = 1;
			break;

		case '2':
			ledOn(2);
			ledOff(prevLED);
			prevLED = 2;
			break;

		case '3':
			ledOn(3);
			ledOff(prevLED);
			prevLED = 3;
			break;

		case '4':
			ledOn(4);
			ledOff(prevLED);
			prevLED = 4;
			break;

		case '5':
			ledOn(5);
			ledOff(prevLED);
			prevLED = 5;
			break;

		case '6':
			ledOn(6);
			ledOff(prevLED);
			prevLED = 6;
			break;

		case '0':
		{
			for (size_t i = 0; i <= 6; i++)
				ledOff(i);
			break;
		}

		}
	}
}