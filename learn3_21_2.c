#include <stdio.h>
#include <stdlib.h>

typedef struct Test {
	int i;
	int arr[];
}Test;

typedef struct Test2 {
	int i;
	int* arr;
}Test2;

int main()
{
	//1.
	Test2* t2 = (Test2*)malloc(sizeof(Test2));
	t2->arr = (int*)malloc(sizeof(int) * 10);
	free(t2->arr);//两者顺序不能反
	free(t2);
	//2.
	Test* t = (Test*)malloc(sizeof(Test) + sizeof(int)*10);

	system("pause");
	return 0;
}