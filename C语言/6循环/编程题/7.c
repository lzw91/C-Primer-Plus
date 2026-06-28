#include <stdio.h>
#include <string.h>
#define SIZE 40
int main(void){
    char words[SIZE];
    char ch;
    int i=0;
    printf("Enter a word:");
    scanf("%s",words);
    for(i=strlen(words)-1;i>=0;i--){
        printf("%c",words[i]);
    }
    return 0;
}