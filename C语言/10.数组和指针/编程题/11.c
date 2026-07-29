#include <stdio.h>
#define COLS 5
#define ROWS 3
void show_arr(int arr[][COLS],int rows);
void double_arr(int arr[][COLS],int rows);
int main(void){
    int arr[3][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
    };
    show_arr(arr,ROWS);
    double_arr(arr,ROWS);
    show_arr(arr,ROWS);

    return 0;
}

void show_arr(int arr[][COLS],int rows)
{   
    int i,j;
    printf("The arr is: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<COLS;j++)
            printf("%4d ",arr[i][j]);
        printf("\n");
}
}
void double_arr(int arr[][COLS],int rows)
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<COLS;j++)
            arr[i][j] *= 2;
}
}






