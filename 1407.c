#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = ""; // ���ڼ� �ִ� 100 str����
    gets(str); // �Է� ���� ���ڿ��� str�� ����
    for (int i = 0; i < strlen(str); i++) // strlen�� str ���ڿ��� ũ�⸦ ��ȯ
        if (str[i] == ' ') continue; // ���� str�� i���簡 �����̸� �����ϰ� ����
        else printf("%c", str[i]); // �ƴ϶�� ���� �ϳ� ���
    return 0;
}