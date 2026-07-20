/*
输入\n c跳过本次迭代
输入b结束本次循环
输入h打印阶段三
*/
#include <stdio.h>
int main(void){
    char ch;

    while((ch=getchar())!='#'){
        if(ch=='\n')
             ;
        else if(ch=='c')
            printf("Step 1\n");
        else if(ch=='h'){
            printf("Step 1\n");
            printf("Step 3\n");
        }
        else if(ch=='b'){
            printf("Step 1\n");
            break;
        }
        else{
            printf("Step 1\n");
            printf("Step 2\n");
            printf("Step 3\n");
        }
        }
    return 0;
}
