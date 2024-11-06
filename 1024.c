#include <stdio.h>
int main(){
    char e[30];
    scanf("%s", e);
    for (int i = 0; e[i] != '0'; i++)
    {
       printf("\'%c\'\n", e[i]);
    }
    
    return 0;
}