#include <stdio.h>
#define YOUHAOXISHU 3.785
#define LUCHENGXISHU 1.609
int main(void){
    float mile,gallon;
    printf("Enter your miles traveled: ");
    scanf("%f",&mile);
    printf("Enter gallon: ");
    scanf("%f",&gallon);
    printf("Miles per gallon: %.1f",mile/gallon);
    printf("Liters per 100 kilometers: %,1f",gallon*YOUHAOXISHU/mile*LUCHENGXISHU);
    return 0;
}