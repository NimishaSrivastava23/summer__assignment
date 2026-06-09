#include <stdio.h>
int digit;
int reverse(int n){
  if(n==0)
      return 0;
  if(n>0)
    digit=n%10;
    return digit*10 + reverse(n/10) ;
}
int main()
{ 
int num :
printf("enter number:");
scanf("%d",&num);
printf("%d\n",reverse(num));
}
