#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int temp = 0;
	int a, b, c;
	for (i = 100; i <= 1000; i++){
		a = i % 10;//��ø�λ��
		b = (i / 10) % 10;//���ʮλ��
		c = i /100;//��ð�λ��
		if (i == a*a*a + b*b*b + c*c*c)
			printf("%d��ˮ�ɻ���\n", i);
	}
	system("pause");
	return 0;
}