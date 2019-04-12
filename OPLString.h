#ifndef OPL_STRING
#define OPL_STRING

int opl_strlen(char * array);
/*
**
**	Function that returns length of string
**
*/

int opl_atoi(char * array);
/*
**
**	Function for convert string of digit to integer number
**
*/

int opl_memcmp(char * first_array, char * second_array, int count);
/*
**
**	Function to compare the first COUNT values of arrays
**
*/
int opl_memicmp(char first_array[], char second_array[], int count);
/*
**
**	Function to compare the first COUNT values of arrays
**	but ignores the difference in registersж
**
*/

#endif