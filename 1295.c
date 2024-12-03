#include <stdio.h>
int main(){
    char str[1000] = "";
    char str2[1000] = "";
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str2[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str2[i] = str[i] - 32;
        }
        else
        {
            str2[i] = str[i];
        }
    }
    printf("%s", str2);
    return 0;
}