#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, N=1;
	for (i = 1; i < 10; i++){
		N = (N + 1) * 2;
	}
	printf("猴子第一天摘取了%d个桃子。\n",N);
	system("pause");
	return 0;
}