#include "DAString.h"

#define NULL 0

int da_strlen(char * array)
{
	int i = 0;
	
	while (array[i] != NULL)
		i++;
	
	return i;
}
