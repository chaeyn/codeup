#include <stdio.h>
int main(){
    char x;
    char y = 'a';
    scanf("%c", &x);
    do{
        printf("%c ", y);
        y++;
    }
    while (y<x+1);
        
    return 0;
}