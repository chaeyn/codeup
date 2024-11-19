#include <stdio.h>
int main(){
    int n, i, j, x, y = 0;
    int arr[20][20] = {};    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }
    for (i = 1; i <= 19; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}