#include <stdio.h>
#include <string.h>
#define SIZE 80
char *s_gets(char *st, int n);
void reverse(char *st);
int main(void){
    char st[SIZE];
    puts("Enter a string to st: ");
    while(s_gets(st,SIZE) && st[0]){//空行退出
        reverse(st);
        puts("The reverse string is:");
        puts(st);
        puts("Enter a string to st: ");
    }
    return 0;
}


char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   
        if (find)
            *find = '\0';         
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
void reverse(char *st)
{
    char *p1 = st;
    char *p2 = st+strlen(st)-1;
    char ch;
    while(p1<p2){
        ch = *p1;
        *p1 = *p2;
        *p2 = ch;
        p1++;
        p2--;
    }
}