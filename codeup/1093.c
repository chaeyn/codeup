#include <stdio.h>
int main(){
    int n, x = 0;
    int a[24] = {};
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        a[x] = a[x]+1;
    }

    for(int i=1; i<=23; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}