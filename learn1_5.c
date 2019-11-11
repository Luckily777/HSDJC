#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, t;
	i = 2;
	t = 1;
	while (i <= 5)	//Ñ­»·Ïà³Ë
	{
		t = t*i;
		i += 1;
	}
	printf("t=%d\n", t);
	system("pause");
	return 0;
}
