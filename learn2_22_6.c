#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//


int main(){
	char *p1 = "hello world";
	printf("%d\n", strlen(p1));
	char p2[] = "hello world"; //char p2[] = "hello\\0world";  �򳤶�Ϊ12 ��СΪ13
	//p2[5] = '0'; �����Ϊ11
	//p2[5] = '\0';���Ϊ5 
	printf("%d\n", strlen(p2));//���ҲΪ11 ��������Ĵ�С��12
	printf("%d\n", sizeof(p2));



	system("pause");
	return 0;
}