#include <stdio.h>
#define N 60
int main(void){
    int min,hour,min_x;
    printf("Enter a minute: ");
    scanf("%d",&min);
    while(min>0){
        hour = min/N;
        min_x= min%N;
        printf("The %d minute is same as %d hour %d minute\n",min,hour,min_x);
        printf("Enter a minute: ");
        scanf("%d",&min);
    }

    return 0;
}