#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 80
void store_word(char *st);
int main(void){
    char word[SIZE];

    puts("Enter a string of characters:");
    store_word(word);
    puts("Print the content of the string.");
    fputs(word,stdout);

    return 0;
}
void store_word(char *st)
{   
    char str[SIZE];
    char *p = str;
    char *p1 = st;

    fgets(str,SIZE,stdin);
    while(isspace(*p) && (*p)!='\0'){
        p++;
    }//退出后无空白了
    while(!isspace(*p) && (*p)!='\0'){
        *p1++ = *p++;
    }
    *p1 = '\0';
}