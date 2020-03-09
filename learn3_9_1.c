#include <stdio.h>
#include <stdlib.h>
//条件编译

#define __DEBUG__

int main() {
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++) {
		arr[i] = i;
#ifdef __DEBUG__//有这样的就编译，没有就不编译
		printf("%d\n", arr[i]);
#endif//
	}
	system("pause");
	return 0;
}