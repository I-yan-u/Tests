#include "hex.h"

/**
 * hex - convert decimal to hex
 * 
 * @c: the format to pick the type of hex
 * @i: the decimal to convert
 * Return: none
 */

void hex(char c, unsigned int i)
{
    int n, count = 0; 
    unsigned int hold;
    int *arr;
    
    _case ulcase[] = {
        {'X', hex_u},
        {'x', hex_l},
        {'\0', hex_l}
    };
    
    hold = i;
    
    while (hold/16 != 0)
    {
        hold /= 16;
        count++;
    }
    count++;
    
    arr = malloc(count * sizeof(int));
    
    if (arr == NULL)
    {
        putchar('0');
        return;
    }
    
    for (n = 0; n < count; n++)
    {
        arr[n] = i % 16;
        i /= 16;
    }
    
    for (n = count - 1; n >= 0; n--)
    {
        if (c == ulcase[0].c)
            putchar(ulcase[0].f(arr[n]));
        else if (c == ulcase[1].c)
            putchar(ulcase[1].f(arr[n]));
        else
            putchar(ulcase[2].f(arr[n]));
    }
    printf("\n");
    free(arr);
}

