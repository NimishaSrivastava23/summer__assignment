#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        if (num % 2 == 1)                  //set bit count ka matlab hota hai binary representatiom me kitni baar 1 aaya hai 
            count++;

        num = num / 2;
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}
