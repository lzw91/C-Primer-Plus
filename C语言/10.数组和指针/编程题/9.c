#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(int rows,int cols,double a_c[rows][cols],double a[rows][cols]);
void printf_arr(int rows,int cols,double a[rows][cols]);
int main(void){
    int rows = ROWS,cols = COLS;
    double arr[rows][cols];
    double arr_c[ROWS][COLS] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.0},
        {11.1, 12.2, 13.3, 14.4, 15.5}
    };
    copy(rows,cols,arr_c,arr);
    printf("The arr_c is: \n");
    printf_arr(rows,cols,arr_c);
    printf("The arr is: \n");
    printf_arr(rows,cols,arr);

    return 0;
}
void copy(int rows,int cols,double a_c[rows][cols],double a[][cols])
{   
    int i,j;
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            a[i][j] = a_c[i][j];
}
void printf_arr(int rows,int cols,double a[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%5.1f ",a[i][j]);
        printf("\n");
    }
}