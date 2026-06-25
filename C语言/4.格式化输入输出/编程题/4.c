#include <stdio.h>
#define N 40
int main(void){
    float hight;
    char name[N];
    printf("Enter your hight: ");
    scanf("%f",&hight);
    printf("Enter your name: ");
    scanf("%s",name);
    printf("%s,you are %.3f feet tall.\n",name,hight);

    return 0;
}