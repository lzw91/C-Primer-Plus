#include <stdio.h>
int main(void){
    int sum=0,count = 0;
    int day;
    printf("Enter a day: ");
    scanf("%d",&day);
    while(++count <= day){
        sum+=count;
    }
    printf("The sum is $%d",sum);
    return 0;
}