#include <stdio.h>

void function(double * x, double * y, double * z);

int main(void){
    double x,y,z;
    printf("Enter three number to x,y,z: ");
    scanf("%lf %lf %lf",&x,&y,&z);
    function(&x,&y,&z);
    printf("x = %.2f y = %.2f z = %0.2f",x,y,z);
    return 0;
}

void function(double * x, double * y, double * z)
{
    double min,mid,max;
    double temp;
    min = *x;
    mid = *y;
    max = *z; 
    if(min>mid){
        temp = min;
        min = mid;
        mid = temp;
    }
    if(mid>max){
        temp = mid;
        mid = max;
        max = temp;
    }
    if(min>max){
        temp = min;
        min = max;
        max = temp;
    }
    *x = min;
    *y = mid;
    *z = max;
}