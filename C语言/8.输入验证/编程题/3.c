#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch;
    int count_low = 0,count_up = 0;
    printf("Enter a string of char: ");
    while((ch=getchar())!=EOF){
        if(islower(ch))
            count_low++;
        else if(isupper(ch))
            count_up++;
    }
    printf("The count of lowwer is %d\nThe count of upper is %d",count_low,count_up);
    return 0;

}
