#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void){
    char ch;
    printf("Enter a string of char:");
    ch = get_first();
    printf("The first char that is not space is: %c",ch);
    return 0;
}
char get_first(void)
{
    int ch;
    do{
        ch = getchar();
    }while(isspace(ch));
//拿到了非空白字符
    while(getchar()!='\n')
        continue;//清空缓冲区
    return ch;
}