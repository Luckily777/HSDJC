#include <stdio.h>
#include <stdlib.h>

//浮点数

#define E 1e-4
int main() {
	// 错误的示范
	/*float i = 19.0;
	float j = i / 7.0;
	if (j * 7.0 == i)
	{
		printf("相等");
	}
	else{
		printf("不相等");
	}*/



	float i = 19.0;
	float j = i / 7.0;
	if (j * 7.0 - i<E && j * 7.0 - i>-E)
	{
		printf("相等");
	}
	else {
		printf("不相等");
	}
	system("pause");
	return 0;
}