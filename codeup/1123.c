#include <stdio.h>
int main(){
    int f;
    scanf("%d", &f);
    float result = 9.0/5.0*(float)f+32;
    printf("%.3f", result);
    return 0;
}