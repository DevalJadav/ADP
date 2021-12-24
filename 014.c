#include<stdio.h>

int main()
{
    /* code
    P = price
    R = rate
    N = No of month */
    float p, r, n;
    printf("Enter Your Price: \n");
    scanf("%f", &p);
    printf("Enter Your Rate: \n");
    scanf("%f", &r);
    printf("Enter Your Month: \n");
    scanf("%f", &n);
    float i = p * r * n / 100;
    printf("Your Interest Is: %f", i);
    
    return 0;
}