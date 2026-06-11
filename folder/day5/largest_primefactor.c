#include <stdio.h>

int main()
{
    int num, largestPrimeFactor = 0;

    printf("Enter a number: ");                      //lets take example 42
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)       
    {
        while (num % i == 0)                       //42%2==0             //21%3==0             //7%7==0
        {
            largestPrimeFactor = i;                //then largestprimefactor is 2     //largest prime factor=3         //largestprimefactor=7
            num = num / i;                         //num=42/2=21         //num=21/3=7          //num=7/7=1
        }
    }

    printf("Largest Prime Factor = %d\n", largestPrimeFactor);

    return 0;
}
