#include <stdio.h>
#define DL 0.1
#define FL 0.05
#define N 100
int main(void){
    double sum1=N,sum2=N;
    int i = 0;
    do{
        sum1+=N*DL;
        sum2+=sum2*FL;
        i++;
    }while(sum2<=sum1);
    printf("The year is sum2>sum1: %d sum1:%.2f sum2:%.2f",i,sum1,sum2);
    return 0;
}