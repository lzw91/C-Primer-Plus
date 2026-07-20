#include <stdio.h>
int main(void){
    char n;
    int hour;
    float pay,tax,net_income,hourly_wage;
    printf("Enter the letter a-d to choose rate or q to quit: ");
    while(scanf(" %c",&n) && n!='q'){
        switch(n){
            case 'a':
                hourly_wage = 8.75;
                printf("Enter your work hour: ");
                while(scanf("%d",&hour)){
                    if(hour<=40){
                        pay = hourly_wage*hour;
                    }
                    else{
                        pay = hourly_wage*(40+(hour-40)*1.5);
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
                    printf("Total salary is %.2f taxes is %.2f and net income is %.2f\n",pay,tax,net_income);
                }
                break;
            case 'b':
                hourly_wage = 9.33;
                printf("Enter your work hour: ");
                while(scanf("%d",&hour)){
                    if(hour<=40){
                        pay = hourly_wage*hour;
                    }
                    else{
                        pay = hourly_wage*(40+(hour-40)*1.5);
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
                    printf("Total salary is %.2f taxes is %.2f and net income is %.2f\n",pay,tax,net_income);
                }
                break;
            case 'c':
                hourly_wage = 10.0;
                printf("Enter your work hour: ");
                while(scanf("%d",&hour)){
                    if(hour<=40){
                        pay = hourly_wage*hour;
                    }
                    else{
                        pay = hourly_wage*(40+(hour-40)*1.5);
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
                    printf("Total salary is %.2f taxes is %.2f and net income is %.2f\n",pay,tax,net_income);
                }
                break;
            case 'd':
                hourly_wage = 11.2;
                printf("Enter your work hour: ");
                while(scanf("%d",&hour)){
                    if(hour<=40){
                        pay = hourly_wage*hour;
                    }
                    else{
                        pay = hourly_wage*(40+(hour-40)*1.5);
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
                    printf("Total salary is %.2f taxes is %.2f and net income is %.2f\n",pay,tax,net_income);
                }
                break;
            default:
                printf("Enter the letter a-d to choose rate or q to quit: ");
                break;
        }
    }
    printf("Done!");
    return 0;
}