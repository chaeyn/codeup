#include <stdio.h>
int main(){
    int a, b;
    int result;
    scanf("%d %d", &a, &b);
    if (a>=b)
    {
        result = a-b;
    }
    else if (b>=a)
    {
        result = b-a;
    }
    printf("%d", result);
    return 0;
}