#include <stdio.h>
int main()
{
    int n, i, j, x, y = 0;
    int a[19][19] = {};
    for (i = 0; i < 19; i++) // 한 줄씩 바둑판 상황 입력 받기
        for (j = 0; j < 19; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &n); // 좌표 개수 입력  받기

    for (i = 0; i < n; i++) // 좌표의 개수만큼
    {
        scanf("%d %d", &x, &y);
        x--;
        y--;

        for (j = 0; j < 19; j++) // 가로 줄 흑<->백 바꾸기
        {
            if (a[x][j] == 0)
                a[x][j] = 1;
            else
                a[x][j] = 0;
        }

        for (j = 0; j < 19; j++) // 세로 줄 흑<->백 바꾸기
        {
            if (a[j][y] == 0)
                a[j][y] = 1;
            else
                a[j][y] = 0;
        }

    }
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 19; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}