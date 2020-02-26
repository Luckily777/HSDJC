#include <stdio.h>
#include <stdlib.h>
//重温猜凶手
int main() {
	int temp[4] = { 0 };
	for (int i = 0; i < 4; i++) {

		//1 表示是凶手，则表示说的话为假
		//0 表示不是凶手，则表示说的话为真
		temp[i] = 1;//假定第一个人是凶手的话
		if ((temp[0] != 1) + (temp[2] == 1) +
			(temp[3] == 1) + (temp[3] != 1) == 3) {
			printf("凶手是%c\n", 'A' + i);
		}
		temp[i] = 0;//将第一个的人嫌疑又还原回去
	}
	system("pause");
	return 0;
}
