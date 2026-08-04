#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 80
void store_word(char *st,int n);
int main(void){
    char word[SIZE];

    puts("Enter a string of characters:");
    store_word(word,SIZE);
    puts("Print the content of the string.");
    fputs(word,stdout);

    return 0;
}
void store_word(char *st,int n)
{   
    char str[SIZE];
    char *p = str;
    char *p1 = st;

    fgets(str,n,stdin);
    while(isspace(*p) && (*p)!='\0'){
        p++;
    }//退出后无空白了
    while(!isspace(*p) && (*p)!='\0'){
        *p1++ = *p++;
    }
    *p1 = '\0';
}