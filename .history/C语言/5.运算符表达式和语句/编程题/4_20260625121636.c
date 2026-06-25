#include <stdio.h>
#define FEET 30.48//英尺
#define INCH 2.54//英寸
int main(void){
    float cm;
    printf("Enter a height in centimeters: ");
    scanf("%f",&cm);
    while(cm>0){
        printf("%.1f cm = %d feet ,%f inches",cm,(int)(cm/FEET),cm/INCH);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f",&cm);
    }
    return 0;
}