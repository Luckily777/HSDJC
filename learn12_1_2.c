#include <stdio.h>
#include <stdlib.h>
int IsDiff(int a, int b, int c, int d, int e){//���ܳ�����ͬ�����������
	char temp=0;

	temp |= 1 << (a - 1);
	temp |= 1 << (b - 1);
	temp |= 1 << (c - 1);
	temp |= 1 << (d - 1);
	temp |= 1 << (e - 1);

	return temp == 31;//����������ͬ���������ƺ����õ��Ľ������31
}


int main(){
	for (int a = 1; a < 6; a++){
		for (int b = 1; b < 6; b++){
			for (int c = 1; c < 6; c++){
				for (int d = 1; d < 6; d++){
					for (int e = 1; e < 6; e++){
						if ((b == 2) +( a == 3) == 1 &&
							(b == 2)+ (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) +(a == 1) == 1 && 
							IsDiff(a, b, c, d, e)){
							printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}