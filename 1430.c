#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int n[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
    }

    int M;
    scanf("%d", &M);
    int m[M];
    int p[M];
    for (int i = 0; i < M; i++)
    {
        p[i] = 0;
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (m[i] == n[j])
            {
                p[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}