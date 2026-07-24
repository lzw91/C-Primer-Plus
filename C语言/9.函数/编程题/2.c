#include <stdio.h>
void chline(char ch,int row,int col);
int main(void){
    char ch;
    int row,col;
    printf("The char is: ");
    scanf("%c",&ch);
    printf("The row is: ");
    scanf("%d",&row);
    printf("The col is: ");
    scanf("%d",&col);
    chline(ch,row,col);
    return 0;
}
void chline(char ch,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            putchar(ch);
        }
        printf("\n");
    }
}