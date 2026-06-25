#include <stdio.h>
#include <string.h>
#define N 40
int main(void){
    char name[N];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("a:\"%s\".\n",name);
    printf("b:\"%20s\".\n",name);
    printf("c:\"%-20s\".\n",name);
    printf("d:\"%20s\".\n",name);
    printf("e:%*s.\n",strlen(name)+3,name);
    return 0;
}