#include <stdio.h>
#include <stdlib.h>
//Á·Ï°Ìâ

int main() {
	int x = 3, y = 4, z = 5;
	int num=0;
	num = !(x + y) + z - 1 && y + z / 2;
	printf("%d", num);
	system("pause");
	return 0;
}