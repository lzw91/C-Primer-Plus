#include <stdio.h>
#define LL 0.08
int main(void){
    int count = 0;
    double sum = 100.0;
    do{
        sum+=sum*LL;
        sum-=10.0;
        count++;
    }while(sum>0);
    printf("The year is: %d\n",count);
    return 0;
}