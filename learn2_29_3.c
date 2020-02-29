#include <stdio.h>
#include <stdlib.h>
//¾­µäµÄÌâ2

char* GetMenory(void) {
	char p[] = "hello world";
	//char* p = "hello world";
 
	
	return p;
}


int main() {
	
	char* str = NULL;
	str=GetMenory();
	printf(str);
	system("pause");
	return 0;
}