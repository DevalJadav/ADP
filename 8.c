#include<stdio.h>

int main()
{
    /* code */
    int a, b;
    printf("Enter Your Birth Year: \n");
    scanf("%d", &a);
    b=2021-a;
    if (18 <= b)
      printf("You are capable");
   else
      printf("You are not capable");
    
    // printf("Value: %d",b);
    return 0;
}