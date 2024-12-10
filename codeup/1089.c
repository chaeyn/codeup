#include <stdio.h>
int main(){
    int a, d, n, sum = 0;
    scanf("%d %d %d", &a, &d, &n);
    sum = d*(n-1) + a;
    printf("%d", sum);
    return 0;
}