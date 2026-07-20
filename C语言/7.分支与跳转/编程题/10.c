#include <stdio.h>
int main(void){
    int n;
    float wage,tax;
    printf("Enter 12345:single(1)a householder(2) married with shared property(3) divorced(4) exit(5): ");
    while(scanf("%d",&n)==1 && n!=5){
        switch(n){
            case 1:
                printf("Enter the wage: ");
                scanf("%f",&wage);
                if(wage<=17850)
                    tax =wage*0.15;
                else
                    tax = 17850*0.15 + (wage-17850)*0.28;
                printf("The tax is: %f\n",tax);
                break;
            case 2:
                printf("Enter the wage: ");
                scanf("%f",&wage);
                if(wage<23900)
                    tax =wage*0.15;
                else
                    tax = 23900*0.15 + (23900-17850)*0.28;
                printf("The tax is: %f\n",tax);
                break;
            case 3:
                printf("Enter the wage: ");
                scanf("%f",&wage);
                if(wage<=29750)
                    tax =wage*0.15;
                else
                    tax = 29750*0.15 + (wage-29750)*0.28;
                printf("The tax is: %f\n",tax);
                break;
            case 4:
                printf("Enter the wage: ");
                scanf("%f",&wage);
                if(wage<=14875)
                    tax =wage*0.15;
                else
                    tax = 14875*0.15 + (wage-14875)*0.28;
                printf("The tax is: %f\n",tax);    
                break;
    }
    printf("Enter 12345:single(1)a householder(2) married with shared property(3) divorced(4) exit(5): ");
    }
    return 0;
}
