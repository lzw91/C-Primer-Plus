/*
原代码逻辑混乱
1.体重小于100，身高大于等于72非常高
2.体重小于100，身高大于64小于72高
3.体重大于三百身高小于48很矮
4.体重小于等于三百身高大于等于100身高大于等于48小于等于 64不理想
*/
#include <stdio.h>
int main(void){
    int weight,height;

    scanf("%d %d",&weight,&height);
    if(weight<100 && height>=72)
        printf("You are very tall for your weight.\n");
    else if(weight<100 && (height<72 && height>64))
        printf("You are tall for your weight.\n");
    else if(weight>300 && height<=48)
        printf("You are quite short for your weight.\n");
    else if((weight<=300 && weight>=100) && (height>48 &&height<=64))
        printf("Your weight is ideal.\n");
    return 0;
}
