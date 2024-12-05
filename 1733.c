#include <stdio.h>
#include <string.h>
int main(){
    char ioi[101] = "";
    scanf("%s", ioi);
    for (int i = 0; i < strlen(ioi); i++)
    {
        if (ioi[i] == 'I' && ioi[i+1] == 'O' && ioi[i+2] == 'I' && ioi[i+3] == '\0'){
            printf("IOI is the International Olympiad in Informatics.");
            break;
        }
        else{
            printf("I don't care.");
            break;
        }
    }
    return 0;
}