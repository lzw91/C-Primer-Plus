#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
char *s_gets(char *st, int n);
void del_space(char *st);
int main(void){
    char st[SIZE];
    puts("Enter a string to st: ");
    while(s_gets(st,SIZE) && st[0]){
        puts("Delete the space of string.");
        del_space(st);
        puts(st);
        puts("Enter a string:");
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
void del_space(char *st)
{//走得慢的用来更新字符串中的数据就不会影响快字符的内容了
    char *p1 = st;//遍历全局
    char *p2 = st;//当p1不为空格的时候，往后走，然后当前位置赋值为p1指向的值

    while(*p1){
        if(!isspace(*p1)){
            *p2=*p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';
}
