#include <stdio.h>
#include <stdlib.h>
//��������������
int main(){
	int nums = 0;
	int s1 = 1;
	int s2 = 1;
	int month;
	for (month=3; month < 10;month++){
		nums = s1 + s2;
		s1 = s2;
		s2 = nums;
	}
	printf("�ھŸ���һ����%d������\n", nums);
	system("pause");
	return 0;

}