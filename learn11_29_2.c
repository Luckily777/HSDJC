#include <stdio.h>
#include <stdlib.h>

int main(){
	int count = 0;
	int num;
	scanf("%d", &num);//�����ڴ洢��֮�и����Ĵ����ʽ���Բ������ʽ���
	for (int i = 0; i < 32; i++){
		if ((num&(1 << i)) != 0){//��λ������������
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}