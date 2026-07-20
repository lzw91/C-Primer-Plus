//从50开始猜，如果大了就是guess和low的中间如果笑了就是guess和high的中间，起始值时1和100
#include <stdio.h>
int main(void){   
    printf("y is true.\ns is small.\nb is big.\n");
    int low = 1;
    int high = 100;
    int guess = (low+high)/2;
    char ch;
    printf("I guess %d\n",guess);
    while((ch=getchar())!='y'){
        if(ch == 's'){
            low = guess;
            guess = (low+high)/2;
            printf("I guess %d\n",guess);
        }
        else if(ch == 'b'){
            high = guess;
            guess = (low+high)/2;
            printf("I guess %d\n",guess);
        }
    }
    printf("You are right");

    return 0;
}
//假设guess是91和19


