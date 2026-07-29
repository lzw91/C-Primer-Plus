/*
编写一个函数，返回存储在 double 类型数组中最大值的下标，并在一个简单的程序中测试该函数。
*/
#include <stdio.h>
#define N 10
int arr_i_max(double arr[],int n);
int main(void){
    double arr[N];
    int i;
    printf("Enter a arr(10): ");
    for(i=0;i<N;i++)
        scanf("%lf",&arr[i]);
    printf("The max i of arr is: %d",arr_i_max(arr,N));
}
int arr_i_max(double arr[],int n)
{
    int i;
    int i_max  = 0;
    double max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            i_max = i;
        }
    }
    return i_max;
}