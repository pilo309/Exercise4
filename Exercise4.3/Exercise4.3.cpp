#include <stdio.h>
#include "isNumberEvenOrInteger.h"

//Skriv et modul(header - og sourcefil) med følgende to funktioner :

//int isEven(int number);
//int isInteger(double number);

//Den første funktion skal returnere 1 (true), hvis number er et lige tal ellers
//returneres 0 (false).

//Den anden funktion skal returnere 1 (true) hvis number er et helt tal(dvs.at
//	decimalerne er 0.00000) ellers returneres 0 (false).
//	Skriv herefter et program(main), hvor i du tester dine funktioner.

int main(void)

{
	double number;

	printf_s("Enter number:\n");
	scanf_s("%lf", &number);

	if (isEven(number) == 1)
		printf_s("\nNumber %f is even", number);
	else
	printf_s("\nNumber %f is NOT even", number);


	if (isInteger(number) == 1)
		printf_s("\nNumber %f is an integer", number);
	
	else
	printf_s("\nNumber %f, is NOT an integer", number);



	return 0;
}
