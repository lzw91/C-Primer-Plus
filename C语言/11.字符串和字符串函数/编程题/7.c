#include <stdio.h>
#include <string.h>
char *mystrncpy(char *s1, char *s2, int n);
int main(void)
{
    char dest[20];
    char src1[] = "hello";
    char src2[] = "helloworld666";

    mystrncpy(dest, src1, 15);
    printf("Short string test(len < n): %s\n", dest);

    mystrncpy(dest, src2, 7);
    printf("Long string copy 7 chars(no '\\0'): %s\n", dest);

    return 0;
}

char *mystrncpy(char *s1, char *s2, int n)
{
    char *p1 = s1;
    char *p2 = s2;
    size_t len = strlen(s2);
    if(len < n){
        while(p2 < s2 + len){
            *p1++ = *p2++;
        }
        *p1 = '\0';
    }else{
        while(p2 < s2 + n){
            *p1++ = *p2++;
        }
    }
    return s1;
}