//- �Է¹��� ������ ASCII �ڵ尪 + 2
//- (�Է¹��� ������ ASCII �ڵ尪 * 7) % 80 + 48
#include <stdio.h>
#include <string.h>
int main(){
    char str[20] = "";
    gets(str);
    for(int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]+2);
    }
    printf("\n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]*7%80+48);
    }
    return 0;
}