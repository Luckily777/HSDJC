#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[200];
	char a;
	printf("Enter a string.\n");
	gets(s);
	printf("Enter a charater.\n");
	a = getchar();
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++){
		if (s[i] != a){
			s[j++] = s[i];	//����ͬ��ȡ�����Ž��µ��ַ���֮�У�
		}
	}	
	if (s[i] == '\0'){//��֮���ظ������һλɾ������
			s[j] = s[i];
		}
	printf("%s\n", s);
	system("pause");
	return 0;
}