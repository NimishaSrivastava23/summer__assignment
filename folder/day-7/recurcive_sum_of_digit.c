#include <stdio.h>
int sum_of_digit(int n){
        if(n==0)
          return 0;
       if(n>0)
         return n%10 + sum_of_digit(n/10) ;
}
int main()
{
  int num;
  printf("enter number:")
  scanf("%d",&num);
  printf("%d\n",sum_of_digit(num));
}
