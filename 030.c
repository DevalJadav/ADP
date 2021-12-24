//Write a C program to find the area and circumference of a circle.
#include<stdio.h>

int main()
{
    int r;
    const float PI = 3.14;
    float a, c;

    printf("Enter Your Circle Radius: \n");
    scanf("%d", &r);

    printf("Area Of Circle: %f\n", PI*r*r);
    
    printf("Circumference Of Circle: %f\n", 2*PI*r);

    return 0;
}