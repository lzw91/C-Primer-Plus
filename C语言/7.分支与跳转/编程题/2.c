#include <stdio.h>
int main(void){
    char ch;
    int count = 0;
    printf("Enter a string of char: ");
    while((ch=getchar())!='#'){
        if(ch=='\n')
            printf("\\n-%03d\t",ch);
        else if(ch=='\t')
            printf("\\t-%03d\t",ch);
        else
            printf("%c-%03d\t",ch,ch);
        count++;
        if(count%8==0)
            printf("\n");
    }
    printf("Done!");
    return 0;
}
