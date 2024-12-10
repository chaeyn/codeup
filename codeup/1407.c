#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = ""; // 글자수 최대 100 str정의
    gets(str); // 입력 받은 문자열을 str에 저장
    for (int i = 0; i < strlen(str); i++) // strlen은 str 문자열의 크기를 반환
        if (str[i] == ' ') continue; // 만약 str의 i번재가 공백이면 무시하고 진행
        else printf("%c", str[i]); // 아니라면 문자 하나 출력
    return 0;
}