#include <stdio.h>
#include <stdbool.h>
#define SIZE 80
bool is_within(char ch,char *st);
int main(void){
    char st[SIZE];
    char ch;
    do{
        puts("The string is:");
        fgets(st,SIZE,stdin);
        puts("The char is:");
        scanf("%c",&ch);
        while(getchar()!='\n')
            continue;
        if(is_within(ch,st))
            printf("%c is in the string.\n",ch);
        else    
            printf("%c is not in the string.\n",ch);
        }while(st[0]!='\n');
}
bool is_within(char ch,char *st)
{
    char *p = st;
    while(*p){
        if(*p==ch)
            return true;
        p++;
    }
    return false;
}