#include <stdio.h>
void copy_arr(double target1[], double source[], int n);
int main(void){
    int i;
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5,6.6,7.7};
    double target[3];
    copy_arr(target,source+2,3);
    printf("target1 array: ");
    for(i = 0; i < 3; i++)
    {
        printf("%.1lf ", target[i]);
    }
    printf("\n");

    return 0;
}
void copy_arr(double target[], double source[], int n)//传入数组中间位置，后续方括号内的数字是从这个位置开始为0计数
{
    int i;
    for(i=0;i<n;i++)
        target[i] = source[i];
}