/*
Write a c program to print the first 10 odd numbers 
*/

#include<stdio.h>

int main()
{
    /* code */
    int i=1, n=0;
    while (n < 10)
    {
        if (i%2 != 0)
        {
            printf("%d is odd\n", i);
            n++;
        }
        i++;
    }
    return 0; 
}