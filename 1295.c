#include <stdio.h>
int main(){
    char str[1001];
    fgets(str, 1001, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i]-32);
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            printf("%c", str[i]+32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}