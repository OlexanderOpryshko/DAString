#include "OPLString.h"

#define OPL_NULL 0

int opl_strlen(char * array)
{
	int i = 0;
	
	while (array[i])
		i++;
	
	return i;
}

int opl_atoi(char * array)
{
	int number = 0;
	int length = opl_strlen(array);
	int k = 1;

	for (int i = length - 1; i >= 0; --i)
	{
		if (array[i] == '-')
		{
			number *= -1;
			break;
		}
		else if (array[i] == ' ')
		{
			continue;
		}
		else if (array[i] > '9' || array[i] < '0')
			return 0;

		number += (array[i] - '0') * k;
		k *= 10;
	}

	return number;
}
