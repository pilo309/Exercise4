#include "isNumberEvenOrInteger.h"

int isEven(int number)
{
	if ((number % 2) == 0)   //trækker 2 fra indtil der er mindre end 2 tilbage ergo vil den ramme 0
		return 1;			// når det er et lige tal
	else
		return 0;
}

int isInteger(double number)
{
	int integer = number;

	if (number - integer == 0.0)
		return 1;
	else
		return 0;

}
