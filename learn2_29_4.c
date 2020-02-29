#include <stdio.h>
#include <stdlib.h>
//经典的题3 释放后不会为空


int main() {

	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	// 释放后一定不会为空  
	// 最好使用str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);

	}
	system("pause");
	return 0;
}