#include <stdio.h>
int main(){
    int n = 0;
    int a[10000] = {};
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}