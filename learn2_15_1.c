#include <stdio.h>
#include <stdlib.h>


int main(){
	int x = 3, y = 4, z = 5;

	printf("%d",!(x + y) + z - 1 && y + z / 2);
	system("pause");
	return 0;
}