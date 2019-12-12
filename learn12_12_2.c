#include <stdio.h>
#include <stdlib.h>

int main(){
	char *string = "I love China!";//定义字符指针的变量string并初始化
	printf("%s\n", string);//以地址为起始输出字符串
	system("pause");
	return 0;
}