#include <stdio.h>
int main(void){
    char ch,c;
    int i,j;
    printf("Enter a da xie zi mu: ");
    scanf("%c",&ch);
    int row = ch-'A'+1;
    for(i=1;i<=row;i++){
        for(j=0;j<(row-i);j++){
            printf(" ");
        }
        for(j=0,c='A';j<i;j++,c++){
            printf("%c",c);
        }
        for(j=0,c-=2;j<i-1;j++,c--){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}