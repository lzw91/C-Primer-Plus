#include <stdio.h>
int Fibonacci(unsigned n);//打印第n项的数字
int main(void){
    unsigned n;
    printf("Enter a num to n: ");//输入一个数字作为项数
    scanf("%u",&n);
    printf("The nth term of the Fibonacci sequence is: %d", Fibonacci(n));
    return 0;
}
int Fibonacci(unsigned n) {
    int n1=1, n2=1, sum=0;
    if(n <= 2) 
        return 1;
    for(int i = 2; i < n; i++)
        {
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
    return sum;
}
/*for循环部分的while等价替代
int count = 0;
    while(n - count > 2)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        count++;
    }
*/