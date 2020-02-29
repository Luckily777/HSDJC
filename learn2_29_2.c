#include <stdio.h>
#include <stdlib.h>
//经典的题1  程序崩溃且内存泄漏

void GetMenory(char* p) {
	*p = (char*)malloc(100);
}
int main(){
	/*char* str = NULL;
	GetMenory(str);
	strcpy(str, "heelo world");
	printf(str);*/

	//  修改
	char* str = NULL;
	GetMenory(&str);
	strcpy(str, "heelo world");
	printf(str); 
	system("pause");
	return 0;
}