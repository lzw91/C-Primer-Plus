#include <stdio.h>
int main(void){
    char ch;
    int spa_n=0;
    int n_n=0;
    int ch_n=0;
    printf("Enter a string of characters: ");
    while((ch=getchar())!='#'){
        if(ch==' ')
            spa_n++;
        else if(ch=='\n')
            n_n++;
        else
            ch_n++;
        }
        
    while((ch=getchar()!='\n'))
        continue;

    printf("The number of space is: %d\n",spa_n);
    printf("The number of \\n is: %d\n",n_n);
    printf("The number of others is: %d\n",ch_n);
    return 0;
}