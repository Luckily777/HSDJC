#include <stdio.h>
#include <stdlib.h>

//栈可以进行修改，常量区不能进行修改

int main() {
	// 改变的是栈中的数组内容，是完全ok的
	char str1[] = "hello";
	str1[0] = 'a'; 
	printf("%s", str1);

	//此代码直接崩溃，强制改变常量区中的内容会导致程序崩溃
	char* str2 = "hello";
	str2[0] = 'a';
	printf("%s", str2);

	system("pause");
	return 0;
}