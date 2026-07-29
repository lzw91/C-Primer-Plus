#include <stdio.h>
#define N 5
void copy_arr(double target1[], double source[], int n);
void copy_ptr(double *target2, double *source,int n);
void copy_ptrs(double *target3, double *source,double *end);
int main(void){
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    
    int i;
    printf("source array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%.1lf ", source[i]);
    }
    printf("\n");

    printf("target1 array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%.1lf ", target1[i]);
    }
    printf("\n");

    printf("target2 array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%.1lf ", target2[i]);
    }
    printf("\n");

    printf("target3 array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%.1lf ", target3[i]);
    }
    printf("\n");
    return 0;
}
void copy_arr(double target1[], double source[], int n)
{
    int i;
    for(i=0;i<n;i++)
        target1[i] = source[i];
}
void copy_ptr(double *target2, double *source,int n)
{
    int count = 0;
    while(count<n){
        *target2++ = *source++;
        count++;
    }
}
void copy_ptrs(double *target3, double *source,double *end)
{
    while(source<end){
        *target3++ = *(source++);
    }
}