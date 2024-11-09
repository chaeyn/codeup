#include <stdio.h>
int main(){
    char Q;
    scanf("%s", &Q);
    switch ("%d", Q)
    {
    case 'A' :
        printf("best!!!\n");
        break;
    case 'B' :
        printf("good!!\n");
        break;
    case 'C' :
        printf("run!\n");
        break;
    case 'D' :
        printf("slowly~\n");
        break;
    
    default:
        printf("what?\n");
        break;
    }
    return 0;
}