#include <stdio.h>
#define HOURLYWAGE 10.00//懒得全部创建了英语不好
int main(void){
    int hour;
    float pay,tax,net_income;
    printf("Enter your work hour: ");
    while(scanf("%d",&hour)){
        if(hour<=40){
            pay = HOURLYWAGE*hour;
        }
        else{
            pay = HOURLYWAGE*(40+(hour-40)*1.5);
        }
        if(pay<=300){
            tax = pay*0.15;
        }
        else if(pay<=450){
            tax = 300*0.15 + (pay-300)*0.2;
        }
        else{
            tax = 300*0.15 + 150*0.2 + (pay-450)*0.25;
        }
        net_income = pay-tax;
        printf("Total salary is %.2f taxes is %.2f and net income is %.2f",pay,tax,net_income);
    }
    return 0;
}
