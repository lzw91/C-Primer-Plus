#include <stdio.h>
#define DN 150
int main(void){
    int num_friend = 5;
    int week = 0;
    do{
        num_friend--;
        num_friend*=2;
        week++;
    }while(num_friend<=DN);
    printf("The week is: %d",week);
    return 0;
}