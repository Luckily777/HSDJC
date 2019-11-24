#include <stdio.h>
#include <stdlib.h>

int CountNum(int n){

	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);//取出奇数位和偶数位的1
	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);//取出两位
	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);//取出四位
	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);//取出八位
	n = (n & 0x0000ffff) + ((n >>16) & 0x0000ffff);//取出十六位
	return n;
}

int main(){

	printf("%d", CountNum(1023));
	system("pause");
	return 0;
}