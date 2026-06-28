#include <stdio.h>
int main(void){
    float f1,f2;
    printf("Enter two float numbers: ");
    while(scanf("%f %f",&f1,&f2)==2){
        printf("(f1-f1)/(f1*f2) = %f\n",(f1-f2)/(f1*f2));
        printf("Enter two float numbers: ");
    }
    return 0;
}