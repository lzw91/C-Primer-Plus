//* rain.c -- 计算多年降雨量的年总量、年均降雨量、月均降雨量 */
#include <stdio.h>
#define MONTHS 12    // 一年12个月
#define YEARS 5      // 数据一共有5年

int main(void)
{
    // 初始化降雨量数据：2010～2014年
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.7},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year, month;
    float subtot, total;

    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        // 单独计算每一年的降雨量总和
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += *(*(rain+year)+month);
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;  // 所有年份总降雨量
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        // 计算每一个月，跨5年的平均降雨量
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += *((*rain)+month);
        printf("%4.1f", subtot/YEARS);
    }
    printf("\n");

    return 0;
}