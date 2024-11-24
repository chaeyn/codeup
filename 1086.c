#include <stdio.h>
int main(){
    float w, h, b = 0;
    scanf("%f %f %f", &w, &h, &b);
    float result = w*h*b/8/1024/1024;
    printf("%.2f MB", result);
    return 0;
}