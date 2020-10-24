#include "keyboardLED.h"

void keyboardLED(void)
{
	int tast;							//da vi vil have askeværdi er det integer
	int ledOnNumber = 0;
	int ledOffNumber = 0;
	
	while (1)

	{
		printf_s("Enter LED number:\n");

		tast = _getch();			//indsætter askeværdi fra tastatur

		ledOff(ledOnNumber);		// slukker tidligere led der var tændt

	if (tast == 48)					// hvis der trykkes 48 som askeværdi (0 i decimal)
		exit(1);					//loop brydes og program termineres

		ledOnNumber = tast - 48;		//substraherer askeværdien (48) af 0 fra decimaltallet
										//dvs. at tastes bliver regnestykket 49-48 = 1 
		ledOn(ledOnNumber);
	}
}