#include <stdio.h>
int main(){
    int h, w, n, l, d, x, y = 0;
    int arr[100][100] = {};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);

        if (d == 1)
        {
            for (int j = 0; j < l; j++)
            {
                arr[x][y] = 1;
                x = x + 1;
            }
            
        }
        else if(d == 0)
        {
            for (int j = 0; j < l; j++)
            {
                arr[x][y] = 1;
                y = y + 1;
            }
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}