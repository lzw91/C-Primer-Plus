#include <stdio.h>
void Temperatures(double f);
int main(void){
    double f;
    printf("Enter a Fahrenheit: ");
    while(scanf("%f",&f)==1){
        Temperatures(f);
        printf("Enter other Fahrenheit: ");
    }
    return 0;
}
void Temperatures(double f)
{
    const float n1 = 273.16;
    const float n2 = 32.0;
    float c = 5.0/9.0*(f-n2);
    float k = c + n1;
    printf("F = %.2f\nC = %.2f\nK = %.2f\n",c,f,k);
}