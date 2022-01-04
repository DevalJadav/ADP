//Write a C program to find the area and circumference of a circle.
#include<stdio.h>

int main()
{
    const float PI = 3.14;
    float a, c, r;

    printf("Enter Your Circle Radius: \n");
    scanf("%f", &r);

    printf("Area Of Circle: %f\n", PI*r*r);
    
    printf("Circumference Of Circle: %f\n", 2*PI*r);

    return 0;
}