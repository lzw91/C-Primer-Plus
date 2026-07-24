#include <stdio.h>
void to_binary(int n,int base);
int main(void){
    int n,base;
    printf("Enter two num to n and base(2-10): ");
    scanf("%d %d",&n,&base);
    while(base<2 || base>10){
    printf("Enter a new base (2-10): ");
    scanf("%d",&base);
}
    printf("%d in base %d = ",n,base);
    to_binary(n,base);
    return 0;
}
void to_binary(int n,int base)
{
    int p = n%base;
    if(n>=base)
        to_binary(n/base,base);//if用n操控,递归函数就对n进行改变
    printf("%d",p);
}