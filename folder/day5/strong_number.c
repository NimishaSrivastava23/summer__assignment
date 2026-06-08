#include <stdio.h>
 
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
 
int main(void)
{
    int number, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i = n;
    while (i != 0)
    {
        sum = sum + factorial(i % 10);
        i = i / 10;
    }
    if (sum == n)
    {
        printf("%d is strong number", number);
    }
  else{
       printf("%d is not a strong number",number);
  }
}
      
