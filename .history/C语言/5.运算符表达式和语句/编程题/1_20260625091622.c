#include <stdio.h>
#define N 60;
int main(void){
    int sec,hour,sec_x;
    printf("Enter a second: ");
    scanf("%d",&sec);
    while(sec>0){
        hour = sec/N;
        sec_x= sec%N;
        printf("The %d second is same as %d hour %d second",sec,hour,sec_x);
        printf("Enter a second: ");
        scanf("%d",&sec);
    }

    return 0;
}