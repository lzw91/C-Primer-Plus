#include <stdio.h>
int main(void){
    float  file_size,download_speed,time;
    printf("Enter download speed(Mbit/s): ");
    scanf("%f",&download_speed);
    printf("Enter file size(Mbytes): ");
    scanf("%f",&file_size);
    time = file_size*8/download_speed;
    printf("At %.2f megabits per second,, a file of %.2f megabytes download in %.2f second."
        ,download_speed,file_size,time);
    return 0;
}