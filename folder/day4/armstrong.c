#include<stdio.h>
   #include<math.h>
   int main(){
    int n, digit=0, sum=0, remainder;
    int original_num=n;
    printf("enter number :");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        n=n/10;
        digit++;
        
    }
    while(n!=0){
        remainder=n%10;
        sum+=pow(remainder,digit);
        n=n/10;
    }
    if(original_num==sum){
        printf("%d is a armstrong number",original_num);

    }
    else{
        printf("%d is not a armstrong number",original_num);
    } 
    return 0;
   }
