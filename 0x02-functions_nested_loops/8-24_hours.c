#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; minute <= 23; hour++)
	{
		for (munite = 0; minute <= 59; minute++)

		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((munite / 10) + '0');
			_putchar((munite % 10) + '0');
			_putchar('\n');
		}
	}
}
