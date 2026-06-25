#include <stdio.h>
int main(void){
    float n = 0.0;
    printf("Enter a float: ");
    scanf("%f",&n);
    printf("The input is%.1for%.1e\n",n,n);
    printf("The input is%+.3for%.3E",n,n);
    return 0;
}