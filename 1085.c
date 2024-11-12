#include <stdio.h>
int main(){
    int h, b, c, s = 0;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    double result = (double)h*b*c*s/8/1024/1024;
    printf("%.1lf MB", result);
    return 0;
}