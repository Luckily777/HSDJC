#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//strlen��ʵ�ֺ�ʹ��
int my_stlen(const char *str)
{
	/*assert(str != NULL);*/ //�������ǿ�ָ�� ����
	int len = 0;
	while (*str != '\0'){
		++len;
		++str;
	}
	return len;
}

int main(){
	char p2[] = "hello\\\0world";
	printf("%d\n", my_strlen(p2));//
	printf("%d\n", sizeof(p2));
	system("pause");
	return 0;
}