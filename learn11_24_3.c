#include <stdio.h>
#include <stdlib.h>

int CountNum(int n){

	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);//ȡ������λ��ż��λ��1
	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);//ȡ����λ
	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);//ȡ����λ
	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);//ȡ����λ
	n = (n & 0x0000ffff) + ((n >>16) & 0x0000ffff);//ȡ��ʮ��λ
	return n;
}

int main(){

	printf("%d", CountNum(1023));
	system("pause");
	return 0;
}