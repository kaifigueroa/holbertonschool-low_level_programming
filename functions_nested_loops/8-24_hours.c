#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++) /* Loop through hours 0 to 23 */
	{
		for (minute = 0; minute < 60; minute++) /* Loop through minutes 0 to 59 */
		{
			_putchar((hour / 10) + '0'); /* Print tens digit of hour */
			_putchar((hour % 10) + '0'); /* Print units digit of hour */
			_putchar(':'); /* Print colon separator */
			_putchar((minute / 10) + '0'); /* Print tens digit of minute */
			_putchar((minute % 10) + '0'); /* Print units digit of minute */
			_putchar('\n'); /* Print newline character */
		}
	}
}
