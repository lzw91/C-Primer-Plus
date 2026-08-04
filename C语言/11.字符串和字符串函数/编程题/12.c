#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int word_cnt = 0;
    int upper_cnt = 0;
    int lower_cnt = 0;
    int digit_cnt = 0;
    int punct_cnt = 0;
    int in_word = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper_cnt++;
        else if (islower(ch))
            lower_cnt++;
        else if (isdigit(ch))
            digit_cnt++;
        else if (ispunct(ch))
            punct_cnt++;

        if (isspace(ch))
        {
            in_word = 0;
        }
        else
        {
            if (in_word == 0)
            {
                word_cnt++;
                in_word = 1;
            }
        }
    }

    printf("Word count: %d\n", word_cnt);
    printf("Uppercase letters: %d\n", upper_cnt);
    printf("Lowercase letters: %d\n", lower_cnt);
    printf("Digit characters: %d\n", digit_cnt);
    printf("Punctuation characters: %d\n", punct_cnt);

    return 0;
}