#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int year;
	int month;
	int day;
	int sum = 0;
	int m[13];
	m[1] = 31;
	m[2] = 28;
	m[3] = 31;
	m[4] = 30;
	m[5] = 31;
	m[6] = 30;
	m[7] = 31;
	m[8] = 31;
	m[9] = 30;
	m[10] = 31;
	m[11] = 30;
	m[12] = 31;
	printf("Enter the year month day:");
	scanf("%d%d%d", &year, &month, &day);
	for (i = 1; i <= month - 1; i++){//将所输入月份前面的每个月的总天数相加
		sum = sum + m[i];
	}
	sum = sum + day;//加上天数
	if (((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) && (month >= 3)){
		sum++;//如果是闰年，给总天数直接加1；
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}