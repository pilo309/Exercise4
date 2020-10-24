#include "keyboardLED.h"

void keyboardLED(void)
{
	int tast;							//da vi vil have askev�rdi er det integer
	int ledOnNumber = 0;
	int ledOffNumber = 0;
	
	while (1)

	{
		printf_s("Enter LED number:\n");

		tast = _getch();			//inds�tter askev�rdi fra tastatur

		ledOff(ledOnNumber);		// slukker tidligere led der var t�ndt

	if (tast == 48)					// hvis der trykkes 48 som askev�rdi (0 i decimal)
		exit(1);					//loop brydes og program termineres

		ledOnNumber = tast - 48;		//substraherer askev�rdien (48) af 0 fra decimaltallet
										//dvs. at tastes bliver regnestykket 49-48 = 1 
		ledOn(ledOnNumber);
	}
}