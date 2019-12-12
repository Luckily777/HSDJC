#include <stdio.h>
#include <stdlib.h>

int main(){
	char *name[] = { "Follow me", "BASIC", "Great Wall", "FORTRAN", "Computer design" };
	char **p;
	int i;
	for (i = 0; i < 5; i++){
		p = name + i;
		printf("%s\n", *p);
	}
	system("pause");
	return 0;
}