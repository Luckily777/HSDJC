#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	int a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || c++ || d++;//�����㣬����һ��Ϊ�棬�����ȫ��������
	printf("a=%d\nb=%d\nc=%d\nd=%d", a, b, c, d);
	system("pause");
	return 0;
}
