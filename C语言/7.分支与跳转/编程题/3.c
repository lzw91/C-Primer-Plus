#include <stdio.h>
int main(void){
    int n;
    int j_n = 0;//奇
    int o_n = 0;//偶
    float t_j = 0,t_o = 0,a_j = 0,a_o = 0;
    printf("Enter a string of numbers: ");
    while(scanf("%d",&n)==1 && n!=0){
        if(n%2==1){
            t_j+=n;
            j_n++;
        }
        else if(n%2==0){
            t_o+=n;
            o_n++;
        }
    }
    printf("The number of these odd numbers is %d and the average of the odd numbers is %f\n",j_n,t_j/j_n);
    printf("The number of these even numbers is %d and the average of the even numbers is %f\n",o_n,t_o/o_n);
    return 0;
}
