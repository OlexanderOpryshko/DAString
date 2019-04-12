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

int opl_memcmp(char * first_array, char * second_array, int count)
{
	for (int i = 0; i < count; i++) 
	{
		if (first_array[i] > second_array[i])
			return 1;
		else if (first_array[i] < second_array[i])
			return -1;
	}

	return 0;
}
int opl_memicmp(char first_array[], char second_array[], int count)
{

	for (int i = 0; i < count; i++) 
	{
		if (first_array[i] >= 'A' && first_array[i] <= 'Z')
			first_array[i] = (first_array[i] - 'A') + 'a';

		if (second_array[i] >= 'A' && second_array[i] <= 'Z')
			second_array[i] = (second_array[i] - 'A') + 'a';

		if (first_array[i] > second_array[i])
			return 1;
		
		else if (first_array[i] < second_array[i])
			return -1;
	}

	return 0;
}



