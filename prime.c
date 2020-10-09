//Program to print prime numbers in a range
#include <stdio.h>
int displayPrimenum (int x); 
int main ()
{
   int n1, n2, i, prime;
   printf("Enter two numbers: ");
   scanf("%d %d", &n1, &n2);
   printf("Prime numbers are:\n");
   for (i = n1 + 1; i < n2; ++i)
   {
      prime = displayPrimenum(i);
      if (prime == 0) //if flag == 0, then display i
         printf("%d\t", i);
   }
   return 0;
}

int displayPrimenum(int x)
{
   int j, flag = 0;
   for (j = 2; j <= x/2; ++j)
   {
      if (x % j == 0)
      {
         flag = 1;
         break;
     }
   }
   return flag;
}
