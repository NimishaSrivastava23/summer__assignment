#include <stdio.h>
int factorial(int n)
{
    // Calculating factorial of number
    if (n == 0)
        return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
   int num;
   printf("enter number whose factorial you want:");
    scanf("%d",&num);
    printf("%d\n", factorial(num));
    return 0;
}
