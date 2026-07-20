#include <stdio.h>
#include <stdbool.h>
int main(void){
    int n;
    int i;
    bool isPrime;
    printf("Enter a number and show all the prime numbers less than or equal to it: ");
    while(scanf("%d",&n)==1 && n>0){
        for(i=2;i<=n;i++){
            isPrime = true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                printf("%d ",i);
            }
        }
        printf("\n");
        printf("Enter a number and show all the prime numbers less than or equal to it: ");
    }
    return 0;
}