#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int result;
    if (a>b) result = a;
    else result = b;
    printf("%d", result);
    return 0;
}