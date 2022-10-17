#include "hex.h"

/**
 * hex_l - hex in lower form.
 * @n: remainder of the number divided by 16.
 */

char hex_l(int n)
{
    char x;
    x = n - 10;
    if (n > 9 && n <= 16)
        return(x + 'a');    
    return(n + '0');   
}

