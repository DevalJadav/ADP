#include <stdio.h>
void main()
{
int a, b,i,n;
printf("enter two values\n");
scanf("%d %d", &a, &b);
printf("%d + %d = %d\n", a, b, a + b);
     for(i=1;i < n ;i++)
     {
          if(i == n)
          {
              printf("%d + %d = %d\n", a, b, a + b);
          }
     }
     
    if(i == 2)
    {
        printf("this is prime number \n");
    }
    else
    {
      printf("this is not prime number");
    }
}