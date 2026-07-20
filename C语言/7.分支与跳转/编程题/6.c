#include <stdio.h>
#include <stdbool.h>
int main(void){
    char ch;
    int count = 0;
    bool is_e  = false;
    printf("Enter a string of char: ");
    while((ch=getchar())!='#'){
        if(ch=='e'){
            is_e = true;
        }
        else if(is_e == true && ch == 'i'){
            count++;
            is_e = false;
        }
    }
    printf("The number of times 'ei' appears is %d",count);
    return 0;
}
