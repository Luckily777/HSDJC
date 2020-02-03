#include <stdio.h>
#include <stdlib.h>

int main(){
	int  a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, *p;

	for (p = a; p<a + 10; p++)

		printf("%d,", *p);
	system("pause");
	return 0;

}