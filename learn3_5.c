#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c1, c2;
	c1 = 'A';//输入大写A
	c2 = c1 + 32;//转换为小写
	printf("%c\n", c1);//输出
	printf("%c\n", c2);
	system("pause");
	return 0;

}