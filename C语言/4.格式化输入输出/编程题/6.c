#include <stdio.h>
#include <string.h>
#define N 40
int main(void){
    char xing[N];
    char ming[N];

    printf("Enter your xing: ");
    scanf("%s",xing);
    printf("Enter your ming: ");
    scanf("%s",ming);
    printf("%*s %*s\n",strlen(ming),ming,strlen(xing),xing);
    printf("%*d %*d",strlen(ming),strlen(ming),strlen(xing),strlen(xing));

    return 0;
}