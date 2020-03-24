#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

// 通过 num1 和 num2 两个参数来获取到返回结果
void FindTwoNum(int arr[], int size, int* num1, int* num2) {
	// 1. 把所有数字按位异或到一起
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum ^= arr[i];
	}
	// 此时 sum 的值就等价于 num1 ^ num2, 这个整数中一定存在某个比特位 为 1
	// 2. 从 sum 中随便找一个比特位为 1 的位
	int pos = 0;
	for (; pos < 32; pos++) {
		if ((sum & (1 << pos)) != 0) {
			break;
		}
	}
	// 循环结束之后, pos 的值对应的比特位就一定是 1
	// 3. 按照 pos 位置的元素是 1 还是 0 把整个数组分成两个部分, 分别进行按位异或
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			// pos 位为 0 的一组
			*num1 ^= arr[i];
		}
		else {
			// pos 位为 1 的一组
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1,1,2,2,3,4,4,5,6,6 };
	int num1 = 0;
	int num2 = 0;
	FindTwoNum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}