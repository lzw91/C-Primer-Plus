#include <stdio.h>
#define N 8
int main(void){
    int i,j;
    double arr1[N]={0.0};
    double arr2[N]={0.0};
    printf("Enter N number to arr1: ");
    for(i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<N;j++){
        for(i=0;i<=j;i++){
            arr2[j]+=arr1[i];
        }
    }
    for(i=0;i<N;i++){
        printf("%5d",arr1[i]);
    }
    printf("\n");
    for(j=0;j<N;j++){
        printf("%5d",arr2[j]);
    }
    return 0;
}