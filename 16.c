#include<stdio.h>

int main()
{
    /* code */
    float f, c;
    printf("Enter Your Fahrenheit Value: \n");
    scanf("%f", &f);
    
    //convet Fahrenheit into Celsius 
    printf("Fahrenheit Into Celsius: %f", c=(f-32)/1.8);

    return 0;
}