#include <stdio.h>
#include "sumBiggerThan100.h"

//Exercise 4.1 En simpel funktion
//a.Skriv prototypen til en funktion sumBiggerThan100(), som kan modtage to
//decimaltal og returnere et helt tal(HINT 4A).
//NB!Husk, at du skal skrive prototypen i en header - fil(*.h).

//b.Funktionen skal returnere 1 (true), hvis summen af de to tal er større end
//100, og 0 (false) hvis summen er mindre end eller lig med 100. Skriv nu
//koden(implementering) til funktionen.
//NB!Husk, at du skal skrive implementeringen i en selvstændig source - fil
//(*.cpp).
//Skriv pseudokode for funktionen inden du koder den.

//c.Skriv et lille testprogram(main()) til din funktion(ny source - fil)

//lave funktion der giver 1 tilbage hvis sum er over 100, og 0 hvis den er andet

int main(void)

{
	double tal1, tal2;

	printf_s("Enter 2 numbers:");				
	scanf_s("%lf%lf", &tal1, &tal2);		//indtaste vores 2 tal

	if (sumBiggerThan100(tal1, tal2) == 1)				//kalde vores funktion som returnerer 1 hvis over 100
		printf_s("Summen er over 100");					//og 0 hvis det ikke er

	else
		printf_s("Summen er under 100");

	return 0;
}