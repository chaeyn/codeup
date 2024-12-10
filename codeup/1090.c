#include <stdio.h>
int main(){
    unsigned long long int  a, r, n = 0;
    scanf("%llu %llu %llu", &a, &r, &n);
    for (int i = 1; i < n; i++)
    {
        a *= r;
    }
    printf("%llu", a);
    return 0;
}