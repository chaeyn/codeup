#include <stdio.h>
#include <string.h>
int main(){
    char t[10] = "";
    scanf("%s", t);
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == 't')
        {
            printf("%d ", i+1);
        }
        
    }
    return 0;
}