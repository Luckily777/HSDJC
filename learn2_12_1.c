#include <stdio.h>
#include <stdlib.h>
//概率题
int main(){
	int gameNums = 6;
	int win = 1;
	int lose = -1;
	int B = 2;
	int C, D, A;
	C = B - 1;
	D = C - 1;
	A = gameNums - B - C - D;
	printf("A队赢得了%d场胜利\n", A);
	system("pause");
	return 0;

}