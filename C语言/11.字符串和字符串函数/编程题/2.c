#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
void store_st(char *st,int n);
int main(void){
        char sto[SIZE];

        puts("Enter a string to add to the array: ");
        store_st(sto,SIZE);
        puts("The content of this string is: ");
        fputs(sto,stdout);

    return 0;
}
void store_st(char *st,int n)
{   
    fgets(st,n,stdin);
    char *p = st;//新建一个指针指向并且移动新指针便于找到起始点
    while(*p){
        if(isspace(*st)){
            *st = '\0';
            break;
        }
        p++;
    }
}