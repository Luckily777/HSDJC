#include <stdio.h>
#include <stdlib.h>
int main(){
	char str1[] = "hehe";
	char str2[] = "hehe";
	printf("%p %p\n", str1, str2); //��������ĵ�ַ
	if (strcmp(str1, str2) == 0){//�Ƚ��ַ�����֮�е������Ƿ���ȣ����Ϊ0������Ϊ����0������С��ΪС��0����
		printf("xiangdeng\n");
	}
	else {
		printf("buxiangdeng\n");
	}
	system("pause");
	return 0;
}