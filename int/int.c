#include "int.h"

/**
 * _int - print integer data type.
 * @num: The integer input
 *
 */

void _int(int num)
{
	int count = 0, i;
	int *arr;
	int n = num;
	int temp = num;

	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return;
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 10;
		temp /= 10;
	}
	
	if (num < 0)
	{
	    putchar('-');
    	for (i = count - 1; i >= 0; i--)
    	{
    	    putchar('0' + (-arr[i]));
    	}
	}
	else
	{
	    for (i = count - 1; i >= 0; i--)
	        putchar(arr[i] + '0');
	}
	free(arr);
}

