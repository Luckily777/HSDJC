#include <stdio.h>
#include <stdlib.h>

int CountNum(int n){

	int count = 0;
	int i;
	for (i = n; i; i /= 2){//ת��Ϊ�����ƣ���������1�ĸ�����
		count += i % 2;
	}
	return count;
}

int main(){

	printf("%d", CountNum(1024));
	system("pause");
	return 0;
}