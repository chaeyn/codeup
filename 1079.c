#include <stdio.h>
int main(){
    char c;
    reload:
    if (c!='q')
    {
        scanf("%c", &c);
        printf("%c", c);
        goto reload;
    }    

    
    return 0;
}
