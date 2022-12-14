#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @str: string parameter
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
			continue;
		}

		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			str[i] -= 32;

		i++;
	}

	return (str);
}
