#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	int a, b, c;
	int number;
	while (1){
		a = 0; b = 0; c = 0;
		scanf("%d", &n);//����n����
		if (n == 0){
			break;
		}
		for (i = 0; i < n; i++){
			scanf("%d", &number);
			if (number < 0){//�����ĸ���
				a++;
			}
			else if (number == 0){//��ĸ���
				b++;
			}
		else//�����ĸ���
			c++;
		}
		printf("��������Ϊ��%d\n��ĸ���Ϊ��%d\n�����ĸ���Ϊ��%d\n", a, b, c);
	}
	system("pause");
	return 0;
}