#include <stdio.h>
int main(void)
{
    int i, j;
    int n;
    float n1, n2, sum1, sum2;

    printf("Enter a n: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum1 = 0.0;
        sum2 = 0.0;

        for (i = 1; i <= n; i++)
        {
            n1 = 1.0 / i;
            sum1 += n1;
        }

        for (j = 1; j <= n; j += 2)
        {
            n2 = 1.0 / j;
            sum2 += n2;
        }
        for (j = 2; j <= n; j += 2)
        {
            n2 = 1.0 / j;
            sum2 -= n2;
        }

        printf("sum1 = %f  sum2 = %f\n", sum1, sum2);

        printf("Enter a n: ");
        scanf("%d", &n);
    }

    return 0;
}
//序列一发散,序列二收敛于0.69