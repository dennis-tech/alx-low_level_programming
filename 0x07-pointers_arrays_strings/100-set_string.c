#include "main.h"

/**
 * set_string -it sets the value of a pointer to a char
 * @s: pointer to a string
 * @to: string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
