#include <stdio.h>
#define N 7
int main(void){
    int day;
    printf("Enter a num of day: ");
    scanf("%d",&day);
    while(day>0){
        printf("%d days are %d weeks, %d days\n",day,day/N,day%N);
        printf("Enter a num of day: ");
        scanf("%d",&day);        
    }
    return 0；
}