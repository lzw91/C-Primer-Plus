#include <stdio.h>
void fuction(double num);
int main(void){
    float num;
    printf("Enter a num in float : ");
    scanf("%f",&num);
    fuction(num);

    return 0;
}
void fuction(double num)
{
    float n_3 = num*num*num;
    printf("The num*num*num is %f",n_3);
}