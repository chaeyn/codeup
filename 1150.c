#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min;
    if (a<=b && a<=c) min = a;
    else if (b<=a && b<=c) min = b;
    else if (c<=a && c<=b) min = c;
    printf("%d", min);
    return 0;
}