#include <stdio.h>
#define TEH 10
int main(void){
    char ch='a'-1;
    while(ch++<'g'){
        printf("%5c",ch);
        printf("\n");
    }
    return 0;
}