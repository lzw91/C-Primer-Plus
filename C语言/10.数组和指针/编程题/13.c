#include <stdio.h>
#define R 3
#define C 5
void scanf_arr(double arr[][C],int r);//输入二维数组内容
double avg_5(double arr[],int c);//处理每一组一维数组平均数
double avg_15(double arr[][C],int r);//处理所有平均数
double max_arr(double arr[][C],int r);//取最大值
void print_result(double arr[][C], int r);//打印
int main(void){
    double arr[R][C];

    scanf_arr(arr,R);
    print_result(arr, R);

    return 0;
}
void scanf_arr(double arr[][C],int r)
{
    int i,j;
    printf("Enter the number to arr: \n");
    for(i=0;i<r;i++)
        for(j=0;j<C;j++)
            scanf("%lf",&arr[i][j]);
}

double avg_5(double arr[],int c)
{
    int j;
    double total = 0.0;
        for(j=0;j<c;j++)
            total += arr[j];
    return total/c;
}
double avg_15(double arr[][C],int r)
{
    int i,j;
    double total = 0.0;
    for(i=0;i<r;i++)
        for(j=0;j<C;j++)
            total += arr[i][j];
    return total/(r*C);
}
double max_arr(double arr[][C],int r)
{
    int i,j;
    double max = arr[0][0];
    for(i=0;i<r;i++)
        for(j=0;j<C;j++)
            if(arr[i][j]>max)
                max = arr[i][j];
    return max;
}
void print_result(double arr[][C], int r)
{
    printf("The avg of group1 is: %.2f\n", avg_5(arr[0], C));
    printf("The avg of group2 is: %.2f\n", avg_5(arr[1], C));
    printf("The avg of group3 is: %.2f\n", avg_5(arr[2], C));
    printf("The avg of three group is: %.2f\n", avg_15(arr, r));
    printf("The max number of arr is: %.2f\n", max_arr(arr, r));
}