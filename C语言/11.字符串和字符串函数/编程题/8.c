#include <stdio.h>
#include <string.h>
#define SIZE 80
char *string_in(char *s1,char *s2);
char *s_gets(char *st, int n);
void del(char *s);

int main(void){
    char st[SIZE];
    char st_in[SIZE];

    puts("Enter a string to st: ");
    s_gets(st,SIZE);
    puts("Enter a string to st_in: ");
    s_gets(st_in,SIZE);

    char *result = string_in(st,st_in);
    
    if(result){
        printf("The address where the first string begins is %p,char is %c",result,*result);
    }
    else{
        printf("The second string is not present in the first string.");
    }
    return 0;
}
char *string_in(char *s1,char *s2)
{
    /*
    从第一个字符串中找到第二个字符串的首字母，然后用strncmp函数对比，第三个参数用srtlen(s2)完美
    */
   char *p1 = s1;
   char *p2 = s2;
   int len = strlen(s2);

    while(*p1){
        if(*p1==*p2){
            if(!strncmp(p1,p2,len)){
                return p1;
            }
        }
        p1++;
    }
    return NULL;
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