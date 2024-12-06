#include <stdio.h>
#include <string.h>
int main(){
    char three[501] = "";
    int num = 0;
    scanf("%s", three);
    for (int i = 0; i < strlen(three); i++)
        num = num + three[i];
    if (num%3==0) printf("1");
    else printf("0");
    return 0;
}