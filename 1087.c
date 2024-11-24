#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; ; i++)
    {
        sum = sum + i;
        if(sum>=n)
        break;
    }
    printf("%d", sum);           
    return 0;
}