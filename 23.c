// Write a C program to print the first 20 prime numbers.
#include <stdio.h>

int main()
{
    int n, i, a=0;
    for (n = 1; n <= 100 ; n++)
    {
        for (i = 2; i < n; i++)
        {
            /* code */
            if (n % i == 0)
            {
                /* code */
                break;
            } 
        }
        if (i == n)
        {
            /* code */
            printf("%d\n", i);
            a++;
            if (a == 20)
            {
                /* code */
                break;
            }
        }
    }
}