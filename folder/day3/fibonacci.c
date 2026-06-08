#include<stdio.h>
int main(){
    int n , term1=0, term2=1, next_term;   /*we  know that fibonaaci series starts with 0 and 1 so the
                                             first term is 0 and second term is 1
                                            and in fibonacci series next term is sum of previous two terms*/

    printf("enter number of term:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d", next_term);
        printf(" ");
        
        term1=term2;                                //for fourth term t2 becames t1 and t3 becames t2 
        term2=next_term;
        next_term=term1+term2;
    
        
    }
}
