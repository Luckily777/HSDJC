#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef  struct HA {
	char num[102];
	int size;
} HighAcc;

HighAcc dealNum(char * num){
	int i = 0;
	int len = strlen(num);
	HighAcc tem = { 0 };
	for (; i < len; i++){
		tem.num[i] = num[len - 1 - i] - '0';	
	}
	tem.size = len;
	return tem;
}

HighAcc add(HighAcc num1, HighAcc num2)
{
	int longer = num1.size > num2.size ? num1.size : num2.size;
	HighAcc res = { 0 };

	int i;
	int tmp;
	for (i = 0; i < longer; i++)
	{
		tmp = num1.num[i] + num2.num[i] + res.num[i];
		res.num[i] = tmp % 10;
		res.num[i + 1] = tmp / 10;
	}
	res.size = longer + res.num[i];
	return res;
}

void PrintNum(HighAcc num){
	int i=0;
	for (i = num.size - 1; i>=0; i--){
		printf("%d", num.num[i]);
	}
}
int main(){
	char num[102] = { 0 };
	scanf("%s", num);
	HighAcc num1 = dealNum(num);
	scanf("%s", num);
	HighAcc num2 = dealNum(num);
	HighAcc res = add(num1, num2);
	PrintNum(res);
	system("pause");
	return 0;
	}