#include "main.h"

/**
 * jack_bauer - prints every minutes in a day
 */
void jack_bauer(void)
{
	int heure = 0;
	int minute = 0;

	while (heure < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + heure / 10);
			_putchar('0' + heure % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
		heure++;
	}
}
