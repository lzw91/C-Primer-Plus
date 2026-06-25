#include <stdio.h>
#include <float.h>
int main(void){
    double n1 = 1.0/3.0;
    float n2 = 1.0/3.0;
    printf("double one: %.6f.\n",n1);
    printf("float one: %.6f.\n",n2);
    printf("double two: %.12f.\n",n1);
    printf("float two: %.12f.\n",n2);
    printf("double three: %.16f.\n",n1);
    printf("float three: %.16f.\n",n2);
    printf("FLT_DIG = %d\n",FLT_DIG);
    printf("DBL_DIG = %d",DBL_DIG);
    return 0;
}