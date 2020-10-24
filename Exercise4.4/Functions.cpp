#include "Header.h"

void fivesec(void)
{
	for (size_t i = 1; i<=6; i++)
	{
		ledOn(i);
		Wait(833);
	}
}

void tensec(void)
{
	for (size_t i = 1; i<=6; i++)
	{
		ledOff(i);
		Wait(833);
	}
}