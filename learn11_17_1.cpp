#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factor(int x){//计算出位数
	int count = 1;
	for (x; x / 10 != 0; x /= 10){
		count += 1;
	}
	printf("%d", count);
	return (count);
}

void Factor(int a){//按位输出
	float n = factor(a);
	int i, j;
	printf("按位输出为:\n");
	for (n; n> 0; n--){
		i = a / pow(10, n - 1);
		j = i % 10;
		printf("%d ", j);
	}
}

void PrintNum(int num){
	int i;
	for (i = num; i; i /= 10)//数位遍历；
	{
		printf("%d ", i % 10);
	}

}
int main(){
	int x;
	printf("请输入一个不大于五位的正整数:\n");
	scanf("%d", &x);
	factor(x);
	printf("\n");
	Factor(x);
	printf("\n");
	printf("逆序输出这个正整数每一位:\n");
	PrintNum(x);
	system("pause");
	return 0;
}