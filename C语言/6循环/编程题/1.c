#include <stdio.h>
#define SIZE 26
int  main(void){
    char array[SIZE];
    char c;
    int i;
    for(c='a',i=0;i<SIZE;c++,i++){
        array[i]=c;
    }
    for(i=0;i<SIZE;i++){
        printf("%c",array[i]);
    }

    return 0;
}