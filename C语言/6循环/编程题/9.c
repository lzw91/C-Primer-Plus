#include <stdio.h>
float fuction(float f1,float f2);
int main(void){
    float f1,f2;
    printf("Enter two float numbers: ");
    while(scanf("%f %f",&f1,&f2)==2){
        printf("(f1-f1)/(f1*f2) = %f\n",fuction(f1,f2));
        printf("Enter two float numbers: ");
    }
    return 0;
}
float fuction(float f1,float f2)
{
    return (f1-f2)/(f1*f2);
}