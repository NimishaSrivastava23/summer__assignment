#include<stdio.h>
int main(){
    int n;
    int original, reverse=0, remainder;
    printf("enter number:");
    scanf("%d",&n);
    original= n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(reverse==original){
        printf("number is palindrome");

    }
    else{
        printf("number is not a palindrome");
    }
}
