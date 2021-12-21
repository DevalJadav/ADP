#include<stdio.h>
int main()
{
   // This variable is to store the input number 
   int n;
 
   printf("Enter an integer: ");
   scanf("%d",&n);
 
   // Modulus (%) returns remainder
   if (n%2 == 0)
      printf("%d is an even number", n);
   else
      printf("%d is an odd number", n);

   return 0;
}