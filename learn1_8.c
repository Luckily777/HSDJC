#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int year, leap;
	printf("输入年份：");
	scanf("%d", &year);
	if (year % 4 == 0){//能够被4整除
		if (year % 100 == 0){//能够被100整除
			if (year % 400 == 0)//能够被400整除
				leap = 1;//满足三个条件时 leap赋值为1
			else
				leap = 0;//否则赋值为0
		}
		else
			leap = 1;
	}
	else
		leap = 0;
	if (leap)//leap为真则输出为闰年，否则相反
		printf("%d is", year);
	else
		printf("%d not is", year);
	system("pause");
	return 0;
}
