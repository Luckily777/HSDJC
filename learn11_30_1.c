#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i, j,k=0;
	for (i = 101; i < 200; i += 2){
		k = sqrt(i);//���ƽ�����������������������
		for (j = 2; j <=k; j++){
			if (i%j == 0){//��������㣬��ζ������ڳ�1�����������������
				break;
			}
		}
		if (j>k){//������k������ζ����û�������Գ���
		printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
