#include <stdio.h>
int main(void){
    char ch;
    int count = 0;
    printf("Enter a string of char: ");
    while((ch=getchar())!='#'){
        if(ch=='.'){
            printf("!");
            count++;
        }
        else if(ch=='!'){
            printf("!!");
            count++;
        }
        else{
            printf("%c",ch);
        }
    }
    printf("The number of replacements is %d",count);
    return 0;
}
