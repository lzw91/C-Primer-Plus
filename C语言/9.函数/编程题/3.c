#include <stdio.h>
void chline(char ch,int row,int col);
int main(void){
    char ch;
    int row,num;
    printf("The char is: ");
    scanf("%c",&ch);
    printf("The row is: ");
    scanf("%d",&row);
    printf("The num of a row is: ");
    scanf("%d",&num);
    chline(ch,num,row);
    return 0;
}
void chline(char ch,int num,int row)
{
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<num;j++){
            putchar(ch);
        }
        printf("\n");
    }
}