#include <stdio.h>
void Temperatures(double f);
int main(void){
    double f;
    printf("Enter a Fahrenheit: ");
    while(scanf("%d",&f)==1){
        Temperatures(f);
        printf("Enter other Fahrenheit: ");
        scanf("%f",&f);
    }
    return 0;
}
void Temperatures(double f)
{
    const float n = 273.16;
    float c = 5.0/9.0*(f-32.0);
    float k = f + n;
    printf("C = %.2f\nF = %.2f\nK = %.2f\n",c,f,k);
}