#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[101], b[101] = "";
    scanf("%s %s", a, b);
    if (strlen(a)>strlen(b))
        printf("%s %s", b, a);
    else if (strlen(a)<strlen(b))
        printf("%s %s", a, b);
    else{
    int result = (strcmp(a, b));
    if (result < 0)
    {
        printf("%s %s", a, b);
    }
    else if (result > 0)
    {
        printf ("%s %s", b, a);
    }
    }
    return 0;
}

