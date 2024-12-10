#include <stdio.h>
int main(){
    int n;
    int result = 23;
    int arr[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]<=result)
        {
            result = arr[i];
        }
    }
    printf("%d", result);
    return 0;
}