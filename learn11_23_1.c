#include <stdio.h>
#include <stdlib.h>

int main(){
	char c, str[80];
	int i, j;
	printf("�������ַ�����\n");
	gets(str);
	printf("������Ҫɾ�����ַ���\n");
	scanf("%c", &c);
	for (i = j = 0; str[i] != '\0'; i++)
	if (str[i] != c){
		str[j++] = str[i];
	}
	str[j] = '\0';
	printf("%s\n", str);
	system("pause");
	return 0;
}