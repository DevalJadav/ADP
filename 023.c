// Write a C program to print the first 20 prime numbers.
#include <stdio.h>

int main()
{
    int n, i, count=0;
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
            count++;
            if (count == 20)
            {
                /* code */
                break;
            }
        }
    }
}