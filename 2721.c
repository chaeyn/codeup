#include <stdio.h>
#include <string.h>
int main(){
    char s1[20], s2[20], s3[20] = "";
    scanf("%s\n%s\n%s", s1, s2, s3);
    char ls1 = s1[strlen(s1) - 1];
    char ls2 = s2[strlen(s2) - 1];
    char ls3 = s3[strlen(s3) - 1];
    char fs1 = s1[0];
    char fs2 = s2[0];
    char fs3 = s3[0];
    if (ls1==fs2 && ls2==fs3 && ls3==fs1) printf("good");
    else printf("bad");
    return 0;
}