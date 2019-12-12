#include <stdio.h>
#include <stdlib.h>

int main(){
	char *name[] = { "I", "like", "Beijing." };
	char **p;
	int i;
	for (i = 2; i >= 0; i--){
		p = name + i;
		printf("%s ", *p);
	}
	system("pause");
	return 0;
}