#include "main.h"

/**
 * jack_bauer - Prints every minute of the day.
 *
 * Return:  none.
 */
void jack_bauer(void)
{
	char min_1, min_2, hour_1, hour_2;

	for (hour_1 = 48; hour_1 <= 50; hour_1++)
	{
		for (hour_2 = 48; hour_2 <= 57; hour_2++)
		{
			if (hour_1 == 50 && hour_2 >= 52)
				continue;

			for (min_1 = 48; min_1 <= 53; min_1++)
			{
				for (min_2 = 48; min_2 <= 57; min_2++)
				{
					_putchar(hour_1);
					_putchar(hour_2);
					_putchar(':');
					_putchar(min_1);
					_putchar(min_2);
					_putchar('\n');
				}
			}
		}
	}
}
