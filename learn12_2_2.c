#include <stdio.h>
#include <stdlib.h>

int main(){
	int* p = NULL;//ָ��ʹ��֮������Ч��
	int a = 10;
    p = &a;
	if (p != NULL){
		*p = 20;
	}
	printf("%d", *p);
	system("pause");
	return 0;

}