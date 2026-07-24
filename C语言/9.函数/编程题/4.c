#include <stdio.h>
double avr(double d1,double d2);
int main(void){
    double d1,d2;
    printf("Enter two number(double) to d1 and d2: ");
    scanf("%lf %lf",&d1,&d2);
    printf("The Harmonic mean of d1 and d2 is: %lf",avr(d1,d2));
}
double avr(double d1,double d2)
{
    return (2*d1*d2)/(d1+d2);
}