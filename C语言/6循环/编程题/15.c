#include <stdio.h>
#define N 40

int main(void){
    char arr[N];
    int i = 0;
    printf("Enter a string: ");

    do {
        scanf("%c", &arr[i]);
    } while (arr[i++]!= '\n');
//i在换行符下一位需要回退俩位
    printf("Reverse the array: ");
    for(i-=2; i >= 0; i--){
        printf("%c", arr[i]);
    }
    return 0;
}