#include <stdio.h>
void show(const double ar[],int n);
void show2(const double ar2[][3],int n);
int main(void){
    printf("show the ar:\n");
    show((double []) {8,3,9,2},4);
    printf("\n");
    printf("show the ar2:\n");
    show2((double [][3]) {{8,3,9},{5,4,1}},2);
    return 0;
}
void show(const double ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%f ",ar[i]);
}
void show2(const double ar[][3],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++)
            printf("%f ",ar[i][j]);
        printf("\n");
    }
}