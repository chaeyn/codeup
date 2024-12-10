#include <stdio.h>
int main(){
    char str[30];
    fgets(str, 31, stdin);
    printf("%s", str);
    return 0;
}