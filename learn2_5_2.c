#include <stdio.h>
#include <stdlib.h>

struct {
	int x, y;
} s[2] = { { 1, 3 }, { 2, 7 } };

int main(){
	printf("%d\n", s[0].y / s[1].x);
	system("pause");
	return 0;
}