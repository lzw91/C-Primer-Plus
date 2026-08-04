#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LEN 10

char *s_gets(char *st, int n);
void pri_string(char *st[],int n);
void pri_ascii(char *st[],int n);
void pri_len(char *st[],int n);
void pri_fir(char *st[],int n);
int get_first_word_len(char *st);

int main(void){
    char st[LEN][SIZE];
    char *p[LEN];
    int count = 0;
    int choice;

    while(count<LEN && s_gets(st[count],SIZE)){
        p[count] = st[count];
        count++;
    }
    printf("Choose a number(1-5) and 5 to quit: ");
    while(scanf("%d",&choice) && choice!=5){
        switch(choice){
            case 1:
                pri_string(p,count);
                break;
            case 2:
                pri_ascii(p,count);
                break;
            case 3:
                pri_len(p,count);
                break;
            case 4:
                pri_fir(p,count);
                break;
            default:
                printf("please input 1~5\n");
                break;
        }
        printf("Choose a number(1-5): ");
    }
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

void pri_string(char *st[],int n)
{
    int count = 0;
    while(count<n){
        puts(st[count]);
        count++;
    }
}

void pri_ascii(char *st[],int n)
{
    char *temp;
    char *buf[10];
    for(int k=0;k<n;k++){
        buf[k] = st[k];
    }

    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(buf[i],buf[j])>0){
                temp = buf[i];
                buf[i] = buf[j];
                buf[j] = temp;
            }
        }
    }
    int count = 0;
    while(count<n)
    {
        puts(buf[count]);
        count++;
    }
}

void pri_len(char *st[],int n)
{
    int count = 0;
    char *temp;
    char *buf[10];
    for(int k=0;k<n;k++){
        buf[k] = st[k];
    }

    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strlen(buf[i])>strlen(buf[j])){
                temp = buf[i];
                buf[i] = buf[j];
                buf[j] = temp;
            }
        }
    }
    while(count<n)
    {
        puts(buf[count]);
        count++;
    }
}

void pri_fir(char *st[],int n)
{
    int count = 0;
    int i,j;
    char *temp;

    char *buf[10];
    for(int k=0;k<n;k++){
        buf[k] = st[k];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(get_first_word_len(buf[i])>get_first_word_len(buf[j])){
                temp = buf[i];
                buf[i] = buf[j];
                buf[j] = temp;
            }
        }
    }
    while(count<n)
    {
        puts(buf[count]);
        count++;
    }
}

int get_first_word_len(char *st)
{
    int len = 0;
    while(*st == ' ')
        st++;
    while(*st != '\0' && *st != ' ')
    {
        len++;
        st++;
    }
    return len;
}