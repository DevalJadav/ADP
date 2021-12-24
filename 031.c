//Write a C program to display volume of cylinder using the formula pi*r2*h.
#include<stdio.h>

int main()
{
    int r, h;
    const float PI = 3.14;

    printf("Enter Your Height and Radius: \n");
    scanf("%d %d", &h, &r);

    printf("Volume Of Cylinder: %f\n", PI*r*r*h);

    return 0;
}