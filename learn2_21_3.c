#include <stdio.h>
#include <stdlib.h>
//

int main(){
	int a[5][5]; 
	int (*p)[4];
	p=a;// 相当于做了一次强转 p= （int (*p)[4]）a； a的类型为int（*）[5]
	printf("%p,%d\n", &p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//FFFFFFC  -4
	system("pause");

	//  int * 相减 减去的是按照类型相减
	return 0;
}