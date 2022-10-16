#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - print characters to the stdout
 * @c: character
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * bin - converts decimal to binary
 * @decimal: number in base 10
 *
 */

void bin(int decimal)
{
    int i, hold, count = 0;
    int *arr;
    
    hold = decimal;

    while (hold / 2 != 0)
    {
        hold /= 2;
        count++;

    }
    count++;
    printf("%d\n", count);

    arr = malloc(count * sizeof(int));
    
    if (arr == NULL)
    {
        printf("0");
        return;
    }
    for (i = 0; i < count; i++)
    {
        arr[i] = decimal % 2;
   
        decimal /= 2;
    }
    for (i = count - 1; i >= 0; i--)
    {   
        _putchar(arr[i] + '0');

    }
    printf("\n");
        
    free(arr);
}

/**
 * oct - converts decimal to oct
 * @decimal: number in base 10
 *
 */
void oct(int decimal)
{
    int i, hold, count = 0;
    int *arr;
    
    hold = decimal;

    while (hold / 8 != 0)
    {
        hold /= 8;
        count++;

    }
    count++;
    printf("%d\n", count);

    arr = malloc(count * sizeof(int));
    
    if (arr == NULL)
    {
        printf("0");
        return;
    }
    for (i = 0; i < count; i++)
    {
        arr[i] = decimal % 8;

        decimal /= 8;
    }
    for (i = count - 1; i >= 0; i--)
    {   
        _putchar(arr[i] + '0');

    }
    printf("\n");
        
    free(arr);
}

