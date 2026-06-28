#include <stdio.h>
#define N 8
int main(void){
    int array[N];
    int i;
    printf("Enter eight number: ");
    for(i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    printf("Print eight numbers in reverse order: ");
    for(i=N-1;i>=0;i--){
        printf("%d ",array[i]);
    }
    return 0;
}