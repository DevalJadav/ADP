#include<stdio.h>

int main()
{
    int i, n;
    for (i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter Value Of %d\n", i);
        scanf("%d", &n);
    }
    
    for (i = 0; i < 4; i++)
    {
        /* code */
        printf("Value Of %d is %d\n", i, n);
    }
}