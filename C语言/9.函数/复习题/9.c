#include <stdio.h>
void choose(void);
int choice(int low,int high);
int main(void){
    int n;
    choose();
    n = choice(1,4);
    printf("You choice is %d.",n);
    return 0;
}


void choose(void)
{
    printf("Please choose one of the followint:\n ");
    printf("1) copy files       2) move files\n");
    printf("3) remove files     4(quit)\n");
    printf("Enter the number of your choice: ");
}

int choice(int low, int high)
{
    int n;
    char ch;
    int res;
    while ((res = scanf("%d", &n)) != 1 || (n < low || n > high))
    {
        while ((ch = getchar()) != '\n');
        if (res != 1)
            return 4;
        choose();
    }
    return n;
}