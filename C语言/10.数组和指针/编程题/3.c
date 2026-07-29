#include <stdio.h>
#define N 10
int arr_max(int arr[],int n);
int main(void){
    int arr[N];
    int i;
    printf("Enter a arr(10): ");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    printf("The max of arr is: %d",arr_max(arr,N));
    return 0;
}
int arr_max(int arr[],int n)
{
    int i;
    int max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}