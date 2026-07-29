/*
编写一个程序，初始化一个 double 类型的二维数组，
使用编程练习 2 中的拷贝函数把该数组中的数据拷贝至另一个二维数组中（因为二维数组是数组的数组，
所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
*/
#include <stdio.h>
#define ROWS 5
#define COLS 5
void copy_arr(double target1[], double source[], int n);
int main(void){
    int i,j;
    double source[ROWS][COLS] = {
    {1.1, 2.2, 3.3, 4.4, 5.5},
    {6.6, 7.7, 8.8, 9.9, 10.1},
    {11.2, 12.3, 13.4, 14.5, 15.6},
    {16.7, 17.8, 18.9, 19.1, 20.2},
    {21.3, 22.4, 23.5, 24.6, 25.7}
    };
    double target1[ROWS][COLS]={0};
    for(i=0;i<ROWS;i++)
        copy_arr(target1[i],source[i],COLS);
    printf("The target is: \n");
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++)
            printf("%5.1f",target1[i][j]);
        printf("\n");
    }   
}
void copy_arr(double target1[], double source[], int n)
{
    int i;
    for(i=0;i<n;i++)
        target1[i] = source[i];
}