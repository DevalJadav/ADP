//Write a C program to print the average of 10 numbers. Accept all the numbers from the user.
#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, avg;
    printf("Enter Number: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    avg = (a+b+c+d+e+f+g+h+i+j)/10;
    printf("Average= %d", avg);
    return 0;
}