#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

//Ä£ÄâÊµÏÖstrncat
char* Strncat(char* des, const char* ser, size_t num) {
	assert(des!=NULL&&ser!=NULL);
	char* ret = (char*)des;
	while (*des != '\0') {
		des++;
	}
	while(num>0) {
		*des = *ser;
		ser++;
		des++;
		num--;
	}
	*des = '\0';
	return ret;
}

int main() {
	//int a = 2,b = 3,c = 4;
	//printf("%d",!(a + b) - c + 1 || c + b / 2);
	char *arr1= "world goodmoring";
	char arr2[1024] = "hello";
	Strncat(arr2, arr1, 5);
	printf("%s\n", arr2);
	system("pause");
	return 0;
}