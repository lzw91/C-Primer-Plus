#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];
    char *try_p = try;
    char ans[SIZE] = ANSWER;
    char *ans_p = ans;

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while(*try_p){
        *try_p = toupper(*try_p);
        try_p++;
    }
    while(*ans_p){
        *ans_p = toupper(*ans_p);
        ans_p++;
    }
    while (strcmp(try, ans) != 0)
    {
        puts("No, try again.");
        s_gets(try, SIZE);
        try_p = try;
        while(*try_p){
        *try_p = toupper(*try_p);
        try_p++;
    }
    }
    puts("That's right!");
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\0' && st[i] != '\n')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}