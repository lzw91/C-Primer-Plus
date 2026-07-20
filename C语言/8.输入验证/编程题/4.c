#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void){
    int ch;
    bool is_word = false;
    int count_alpha = 0;
    int count_num = 0;
    while((ch=getchar())!=EOF){
        if(isalpha(ch))
            count_alpha++;
//计算单词字母总数
        if(isalpha(ch) && !is_word)
            is_word = true;//遇到单词且不在单词状态就进去Average number of letters per word
        else if((isspace(ch) || ispunct(ch)) && is_word){
            count_num++;
            is_word = false;
        }//遇到空格标点退出单词状态
//计算单词数
    }
    printf("Average number of letters per word: %.2f",(float)count_alpha/count_num);
    return 0;
}
