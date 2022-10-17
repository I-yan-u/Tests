#include "hex.h"

/**
 * hex_u - hexdecimal in uppercase 
 * @n: The reminders of the decimal divided by 16
 */
 
char hex_u(int n)
{
    char x;
    x = n - 10;
    if (n > 9 && n <= 16)
        return(x + 'A');    
    return(n + '0');
}

