#include <stdio.h>
int main(void){
    int ch;
    int count = 0;
    printf("Enter a string of char: ");
    while((ch=getchar())!=EOF){
            count++;
        if(ch<' '){
            if(ch=='\n'){
                printf(" \\n %d\n",ch);
                count = 0;                                              
            }
            else if(ch=='\t')
                printf(" \\t %d",ch);
            else
                printf(" ^%c %d",ch+64,ch);
    }   
        else
            printf(" %c %d",ch,ch);
        }
        if(count==10){
            printf("\n");
            count=0;
        }
    return 0;
}
