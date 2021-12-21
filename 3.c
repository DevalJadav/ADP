#include<stdio.h>

int main()
{
    /* code
    P = price
    R = rate
    N = No of month or year */
    float p, r, n;
    printf("Enter Your Price: \n");
    scanf("%f", &p);
    printf("Enter Your Rate: \n");
    scanf("%f", &r);
    printf("Enter Your Month: \n");
    scanf("%f", &n);
    printf("Your Interest Is: %f", p*r*n/100);
    
    return 0;
}

/* 
%d = int value
%f = float value
*/