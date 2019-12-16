#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Hh{//定义结构体数组
	char num[102];
	int size;
}HighAcc;

HighAcc DealNum(char *num){//处理数组，将内部数组逆序排列
	int i;
	HighAcc temp = { 0 };
	int len = strlen(num);
	for (i = 0; i < len; i++){
		temp.num[i] = num[len - 1 - i] - '0';
	}
	temp.size = len;
	return temp;
}


HighAcc Mul(HighAcc num1, HighAcc num2){//乘法
	HighAcc res = { 0 };//定义积为零
	if (num1.size == 1 && num1.num[0] == 0 ||//定义当位数一位，或者为0时，直接返回
		num2.size == 1 && num2.num[0] == 0)
	{
		res.size = 1;
		return res;
	}

	int i, j;
	int tmp;
	for (i = 0; i < num1.size; i++)
	{
		for (j = 0; j < num2.size; j++)
		{
			tmp = num1.num[i] * num2.num[j] + res.num[i + j];//一位乘一位+上进位
			res.num[i + j] = tmp % 10;//本位留
			res.num[i + j + 1] += tmp / 10;//进位
		}
	}
	res.size = i + j - !res.num[i + j - 1];//位数
	return res;
}


void PrintNum(HighAcc num){//打印
	int i;
	for (i = num.size - 1; i >= 0; i--){
		printf("%d", num.num[i]);
	}
}

int main(){
	char num[102] = { 0 };
	scanf("%s", num);
	HighAcc num1 = DealNum(num);
	scanf("%s", num);
	HighAcc num2 = DealNum(num);
	HighAcc res = Mul(num1, num2);
	PrintNum(res);
	system("pause");
	return 0;
}