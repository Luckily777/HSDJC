#include <stdio.h>
#include <stdlib.h>
//

int main(){
	char a[] = "programming", b[] = "language";
	char *p1, *p2;
	int l;
	p1 = a, p2 = b;
	for (int i = 0; i<7; i++)
	if (*(p1 + i) == *(p2 + i))
		printf("%c", *(p1 + i));
	system("pause");
	return 0;
}