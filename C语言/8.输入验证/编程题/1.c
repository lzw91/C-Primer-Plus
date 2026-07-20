#include <stdio.h>
int main(void){
        int ch; 
        int count = 0;
        while((ch=getchar()!=EOF)){
            count++;
        }
        printf("The count of file is: %d",count);
    return 0;
}
