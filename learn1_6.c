#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, t;
	t = 1;
	for (i = 2; i <= 5; i++)	//ѭ�����
	{
		t = t*i;
	}
	printf("t=%d\n", t);
	system("pause");
	return 0;
}
