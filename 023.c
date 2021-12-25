// Write a C program to print the first 20 prime numbers.
#include <stdio.h>
int main()
{
    int ct = 0, n = 0, i = 1, j = 1;
    while (n < 20)
    {
        j = 1;
        ct = 0;
        while (j <= i)
        {
            if (i % j == 0)
                ct++;
            j++;
        }
        if (ct == 2)
        {
            printf("%d ", i);
            n++;
        }
        i++;
    }
}