#include <stdio.h>
double min(double x,double y);
int main(void){
    int x,y;
    printf("Enter a number to x and y: ");
    scanf("%d %d",&x,&y);
    printf("Enter the mix number of x and y: %.2f",min(x,y));
    return 0;
}
double min(double x,double y)
{
    return (x>y?y:x);
}