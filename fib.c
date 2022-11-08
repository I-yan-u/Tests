#include <stdio.h>

/**
 * fib - finds the fibonnaci sequence to a chosen lenght.
 * @len: The lenght of the sequence.
 * @start: Starting point of the sequence.
 * @move: The increment variable.
 * Return: a fib sequence.
 */

int fib(int len, int start, int move)
{
        int x = 0, n;

        if (len != x)
        {
            n = start;
            printf("%d ", n);
            return (fib(len - 1, start = move, move + start));
        }
}

/**
 * main - runs the fib sequence.
 *
 * Return: always 0.
 */

int main(void)
{
        int f, x = 10;

        fib(x, 1, 1);

        return (0);
} 

