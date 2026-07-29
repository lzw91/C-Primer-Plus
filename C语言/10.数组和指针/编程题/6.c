/*
编写一个函数，把 double 类型数组中的数据倒序排列，并在一个简单的程序中测试该函数
*/
#include <stdio.h>
#define N 10
void fuction(double a[],int n);
int main(void){
    double arr[10];
    int i;
    printf("Please input 10 numbers:\n");
    for(i = 0; i < N; i++)
        scanf("%lf", &arr[i]);

    printf("Original: ");
    for(i = 0; i < N; i++)
        printf("%.1lf ", arr[i]);

    fuction(arr, N);

    printf("\nReversed: ");
    for(i = 0; i < N; i++)
        printf("%.1lf ", arr[i]);
    return 0;
}
void fuction(double a[],int n)
{   double temp;
    double *p1 = a;
    double *p2 = a+N-1;
    while(p1<p2){
        temp = *p1;
        *p1++ = *p2;
        *p2-- = temp;
    }
}