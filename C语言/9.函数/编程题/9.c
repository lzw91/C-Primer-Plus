#include <stdio.h>
double pow_left(double n,int p);
int main(void){
    double n;
    int p;
    printf("Enter a number(double) to n and a number(>=0)to p: ");
    while(scanf("%lf %d",&n,&p)){
        printf("The power(p) of n is: %f\n",pow_left(n,p));
        printf("Enter a number(double) to n and a number(>=0)to p: ");
    }
    return 0;
}
double pow_left(double n, int p)
{
    if (p == 0)
        return 1.0;
    else if (p > 0)
        return n * pow_left(n, p - 1);
    else
        return (1 / n) * pow_left(n, p + 1);
}