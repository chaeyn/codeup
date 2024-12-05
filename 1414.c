#include <stdio.h>
#include <string.h>
int main(){
    char str[101] = "";
    int r1 = 0;
    int r2 = 0;
    scanf("%s", str);   
    for (int i = 0; i < strlen(str); i++){
        if ((str[i] == 'c') || (str[i] == 'C')){
        r1++;
        }
    }    
    for (int i = 0; i < strlen(str); i++){
        if (((str[i] == 'C') || (str[i] == 'c')) && ((str[i+1] == 'C') || (str[i+1] == 'c'))){
        r2++;
        }
    }
    printf("%d", r1);
    printf("\n");
    printf("%d", r2);    
    return 0;
}