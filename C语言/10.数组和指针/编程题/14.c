#include <stdio.h>
void scanf_arr(int rows, int cols, double arr[rows][cols]);
double avg_5(int cols, double arr[cols]);
double avg_15(int rows, int cols, double arr[rows][cols]);
double max_arr(int rows, int cols, double arr[rows][cols]);
void print_result(int rows, int cols, double arr[rows][cols]);
int main(void){
    int rows = 3;
    int cols = 5;
    double arr[rows][cols];
    scanf_arr(rows, cols, arr);
    print_result(rows, cols, arr);
    return 0;
}
void scanf_arr(int rows, int cols, double arr[rows][cols])
{
    int i,j;
    printf("Enter the number to arr: \n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%lf",&arr[i][j]);
}
double avg_5(int cols, double arr[cols])
{
    int j;
    double total = 0.0;
        for(j=0;j<cols;j++)
            total += arr[j];
    return total/cols;
}
double avg_15(int rows, int cols, double arr[rows][cols])
{
    int i,j;
    double total = 0.0;
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            total += arr[i][j];
    return total/(rows*cols);
}
double max_arr(int rows, int cols, double arr[rows][cols])
{
    int i,j;
    double max = arr[0][0];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            if(arr[i][j]>max)
                max = arr[i][j];
    return max;
}
void print_result(int rows, int cols, double arr[rows][cols])
{
    printf("The avg of group1 is: %.2f\n", avg_5(cols, arr[0]));
    printf("The avg of group2 is: %.2f\n", avg_5(cols, arr[1]));
    printf("The avg of group3 is: %.2f\n", avg_5(cols, arr[2]));
    printf("The avg of three group is: %.2f\n", avg_15(rows, cols, arr));
    printf("The max number of arr is: %.2f\n", max_arr(rows, cols, arr));
}