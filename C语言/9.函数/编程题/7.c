#include <stdio.h>
#include <ctype.h>
void fuction(char ch);
int main(void){
    char ch;
    printf("Enter a char: ");
    ch = getchar();
    fuction(ch);
    return 0;
}
void fuction(char ch)
{
    char c;
    int loc;
    if(isalpha(ch)){
        c = tolower(ch);
        loc = c - 'a' + 1;
        printf("The char is an alpha.\n");
        printf("The loction of ch is %d\n",loc);
    }
    else
        printf("The char is not an alpha");
}