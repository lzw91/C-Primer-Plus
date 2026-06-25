#include <stdio.h>
int main(void){
    int n,x;
    printf("Enter a num: ");
    scanf("%d",&n);
    x=n;
    while(n<=x+10){
        printf("%d\n",n++);
    }
    return 0;
}