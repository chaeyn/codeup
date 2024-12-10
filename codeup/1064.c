#include <stdio.h>
int main(){
    int x, y, z = 0;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", (x < y ? x : y)<z ? (x < y ? x : y) : z);
    return 0;
}