#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,j=0;
	int x, y=0;
	printf("Enter a Number:\n");
	    scanf("%d", &i);
		while (i!=0){
			x = i % 10;//��10����ȡ�ø�λ
			y += x*pow(16, j);//���Խ��ƣ�
			i /= 10;//����һλ
				j++;
	}
	printf("���ʮ������Ϊ��%d\n",y);
	system("pause");
	return 0;
}