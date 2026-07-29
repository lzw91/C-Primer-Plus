/*
编写一个函数，返回存储在 double 类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
*/
#include <stdio.h>
#define N 10
double max_min(double *,int ); 
int main(void){
    double arr[N];
    int i;
    printf("Enter %d numbers: ", N);
    for(i=0;i<N;i++)
        scanf("%lf", &arr[i]);
    printf("Difference between max and min: %.2f\n", max_min(arr,N));
    return 0;
}
double max_min(double *a,int n)
{
    int i;
    double max = a[0];
    double min = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    return max - min;
}
