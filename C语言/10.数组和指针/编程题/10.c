#include <stdio.h>
#define N 10
void sum_arr1_arr2(double a1[],double a2[],double a3[],int n);
int main(void){
    int i;
    double arr1[N] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    double arr2[N] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0};
    double arr3[N];

    sum_arr1_arr2(arr1,arr2,arr3,N);
    
    printf("The arr3 is: \n");
    for(i=0;i<N;i++)
        printf("%5.1f ",arr3[i]);
    return 0;
}
void sum_arr1_arr2(double a1[],double a2[],double a3[],int n)
{
    int i;
    for(i=0;i<n;i++)
        a3[i] = a1[i] + a2[i];
}