#include <stdio.h>
#include <stdlib.h>
//���²�����
int main() {
	int temp[4] = { 0 };
	for (int i = 0; i < 4; i++) {

		//1 ��ʾ�����֣����ʾ˵�Ļ�Ϊ��
		//0 ��ʾ�������֣����ʾ˵�Ļ�Ϊ��
		temp[i] = 1;//�ٶ���һ���������ֵĻ�
		if ((temp[0] != 1) + (temp[2] == 1) +
			(temp[3] == 1) + (temp[3] != 1) == 3) {
			printf("������%c\n", 'A' + i);
		}
		temp[i] = 0;//����һ�����������ֻ�ԭ��ȥ
	}
	system("pause");
	return 0;
}
