#include <stdio.h>
int main(void){
    char ch;
    int count = 0;
    printf("Enter a string of char: ");
    while((ch=getchar())!='#'){
        switch(ch){
            case '.':
                printf("!");
                count++;
                break;
            case '!':
                printf("!!");
                count++;
                break;
            default:
                printf("%c",ch);
                count++;
                break;
        }
    }
    printf("The number of replacements is %d",count);
    return 0;
}
