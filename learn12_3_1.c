#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, k;
	for (i = 1; i < 5; i++){
		for (j = 1; j < 5; j++){
			for (k = 1; k < 5; k++){
				if (i != k&&i != j&&j != k){//��λʮλ��λ�������
					printf("%d%d%d\n", i, j, k);//
				}
			}
		}
	}
	system("pause");
	return 0;
}