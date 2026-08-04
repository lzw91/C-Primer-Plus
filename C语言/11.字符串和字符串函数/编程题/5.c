#include <stdio.h>
#define SIZE 80
char *find_char(char *st,char ch);
int main(void){
    char st[SIZE];
    char ch;
    char *p;

    puts("The string is:");
    fgets(st,SIZE,stdin);
    puts("The character is:");
    ch = getchar();
    puts("Find the character ch in the string.");
    p = find_char(st,ch);
    if(p)
        printf("The %c's adress is %p.\n",*p,p);
    else
        printf("The char is not appear.\n");
    
    return 0;
}
char *find_char(char *st,char ch)
{
    char *p = st;
    while(*p){
        if(*p==ch)
            return p;
        p++;
    }
    return NULL;
}