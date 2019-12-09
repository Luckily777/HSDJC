#include <stdio.h>
#include <stdlib.h>
int main(){
	char str1[] = "hehe";
	char str2[] = "hehe";
	printf("%p %p\n", str1, str2); //两个数组的地址
	if (strcmp(str1, str2) == 0){//比较字符数组之中的内容是否相等，相等为0，大于为大于0的数，小于为小于0的数
		printf("xiangdeng\n");
	}
	else {
		printf("buxiangdeng\n");
	}
	system("pause");
	return 0;
}