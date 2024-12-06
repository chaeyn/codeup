#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100] = "";
    scanf("%s %s", a, b);
    if (strcmp(a,b)>0)
    {
        printf("%s %s", b,a);
    }
    else
    {
        printf("%s %s", a,b);
    }    
    return 0;
}

