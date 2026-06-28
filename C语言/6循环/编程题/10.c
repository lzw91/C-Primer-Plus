#include <stdio.h>
int main(void){
    int i,top,down,sum=0;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&down,&top);
    while(top>down){
        for(i=down;i<=top;i++){
        sum+=i*i;
    }
        printf("The sums of the squares from %d to %d is %d\n",down*down,top*top,sum);
        printf("Enter next set of limits: ");
        scanf("%d %d",&down,&top);
    }
    printf("Done");
    return 0;
}