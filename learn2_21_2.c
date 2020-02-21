#include <stdio.h>
#include <stdlib.h>
//

int main(){
	int a[3][2] = { (0,1), (2,3), (4,5) };//逗号法则 只用了1 3 5
	// int a[3][2]={{0,1},{2,3},{4,5}}; 两种不同的
	int *p;
	p = a[0];// 第一行第零个的数
	printf("%d\n", p[0]);//1
	system("pause");
	return 0;
}