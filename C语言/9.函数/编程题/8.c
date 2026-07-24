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
double pow_left(double n,int p)
{
    int i;
    double pow = 1.0;
    if(p>0){
        for(i=0;i<p;i++)
        pow *= n;
    }
    else if(p==0){
        printf("The pow of p = 0 undefined reference.\n");
        pow = 1.0;
    }
    else{
        for(i=0;i<(-p);i++)
        pow *= (1/n);
    }    
    return pow;
}

