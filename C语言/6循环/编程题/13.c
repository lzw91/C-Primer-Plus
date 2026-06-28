#include <stdio.h>
int main(void){
    int i;
    int array[8];
    array[0]=2;
    for(i=1;i<8;i++){
        array[i]=array[i-1]*2;
    }
    i=0;
    do{
        printf("%d ",array[i++]);
    }while(i<8);
    return 0;
}