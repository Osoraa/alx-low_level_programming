#include "main.h"

/**
 * @set_string - Sets the value of a pointer to a char.
 *
 * @s: String to set
 * @to: Char to be set to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;

	return;
}
