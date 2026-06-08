#include<stdio.h>
int main(){
    int n, count=0 , remainder;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
       
        n=n/10;
        count++;
    }
    printf("number of digits in %d is %d",n,count);
}
