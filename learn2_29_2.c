#include <stdio.h>
#include <stdlib.h>
//�������1  ����������ڴ�й©

void GetMenory(char* p) {
	*p = (char*)malloc(100);
}
int main(){
	/*char* str = NULL;
	GetMenory(str);
	strcpy(str, "heelo world");
	printf(str);*/

	//  �޸�
	char* str = NULL;
	GetMenory(&str);
	strcpy(str, "heelo world");
	printf(str); 
	system("pause");
	return 0;
}