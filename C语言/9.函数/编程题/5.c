#include <stdio.h>
void larger_of(double * x,double * y);
int main(void){
    double x,y;
    printf("Enter two number(double) to x and y: ");
    scanf("%lf %lf",&x,&y);
    larger_of(&x,&y);
    printf("x = %.2f y=%.2f",x,y);
}
void larger_of(double * x,double * y)
{
    if(x>y)
        *y = *x;
    else
        *x = *y;
}