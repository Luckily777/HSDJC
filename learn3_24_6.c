#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

//Ä£ÄâÊµÏÖstrncpy
char* Strncpy(char* des, const char* ser, size_t num) {
	assert(des != NULL && ser != NULL);
	char* ret = (char*)des;
	while (num > 0) {
		*des = *ser;
		ser++;
		des++;
		num--;
	}
	*des = '\0';
	return ret;
}

int main() {

	char* arr1 = "world goodmoring";
	char arr2[1024] = {0};
	Strncpy(arr2, arr1, 5);
	printf("%s\n", arr2);
	system("pause");
	return 0;
}