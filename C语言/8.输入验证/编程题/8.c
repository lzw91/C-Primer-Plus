#include <stdio.h>
int main(void){
    float num_fir,num_sec;
    char ch,c;
    
    do{
        printf("Enter the opration of your choice\n");
        printf("a.add       b.subtract\n");
        printf("c.multiply  d.divide\n");
        printf("q.quit\n");
        scanf(" %c",&ch);//case无需清除缓存,%c加空格自动去掉下面输入的换行符
        switch(ch){
            case 'a':
                printf("Enter first number: ");
                while(scanf("%f",&num_fir)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("Enter second number: ");
                while(scanf("%f",&num_sec)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("%.2f + %.2f = %.2f\n",num_fir,num_sec,num_fir+num_sec);
                break;

            case 'b':
                printf("Enter first number: ");
                while(scanf("%f",&num_fir)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("Enter second number: ");
                while(scanf("%f",&num_sec)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("%.2f - %.2f = %.2f\n",num_fir,num_sec,num_fir-num_sec);
                break;
            
                case 'c':
                printf("Enter first number: ");
                while(scanf("%f",&num_fir)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("Enter second number: ");
                while(scanf("%f",&num_sec)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("%.2f * %.2f = %.2f\n",num_fir,num_sec,num_fir*num_sec);
                break;

                case 'd':
                printf("Enter first number: ");
                while(scanf("%f",&num_fir)!=1){
                    while((c=getchar())!='\n')
                        continue;
                    printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                }
                printf("Enter second number: ");
                while(scanf("%f",&num_sec)!=1 || num_sec == 0){
                    if(num_sec ==0){
                        printf("Enter a number other than 0:");
                    }
                    else{
                        while((c=getchar())!='\n')
                        continue;
                        printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or 3:");
                    }
                }
                printf("%.2f / %.2f = %.2f\n",num_fir,num_sec,num_fir/num_sec);
            }
    }while(ch!='q');
    printf("Bye");
    return 0;
}
