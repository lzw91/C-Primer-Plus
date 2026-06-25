#include <stdio.h>
int main(void){
    int n1,n2;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second opeand: ");
    scanf("%d",&n2);
    printf("Enter an integer to serve as the first opeand: ");
    scanf("%d",&n1);
    while(n1>0){
        printf("%d %% %d is %d",n1,n2,n1%n2);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d",&n1);
    }
    return 0;
}