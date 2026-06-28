#include <stdio.h>
int main(void){
    int n;
    int top,down;
    printf("Enter a top: ");
    scanf("%d",&top);
    printf("Enter a down: ");
    scanf("%d",&down);
    for(n = top;n<=down;n++){
        printf("%5d %5d %5d\n",n,n*n,n*n*n);
    }
    return 0;
}