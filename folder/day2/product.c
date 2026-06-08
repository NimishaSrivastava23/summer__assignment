#include<stdio.h>
int main(){
    int n, product=1, remainder;
    printf("enter number:");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        product=product*remainder;
        n=n/10;
    }
    printf("product of digit od number is %d",product);
}
