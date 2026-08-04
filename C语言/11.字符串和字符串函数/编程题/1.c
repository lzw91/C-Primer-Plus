#include <stdio.h>
#include <string.h>
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
}