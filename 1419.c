#include <stdio.h>
#include <string.h>
int main(){
    char love[101] = "";
    int count = 0;
    gets(love);
    for (int i = 0; i < strlen(love); i++)
    {
        if (love[i] == 'l' && love[i+1] == 'o' && love[i+2] == 'v' && love[i+3] == 'e')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}