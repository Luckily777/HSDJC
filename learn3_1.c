#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int num;
	char name[20];
	float score;
}student[5] = { { 10101, "zhang", 78 }, { 10103, "wang", 98.5 }, { 10106, "li", 86 }, { 10108, "ling", 73.5 }, { 10110, "sun", 100 } };//定义结构体，并赋予初值；
int main()
{
	int i, j,k;
	struct Student temp;//定义结构体变量temp，用作临时变量；
	const int n = 5;//定义常变量5；
	printf("The order is:\n");
	for (i = 0; i < n - 1;i++)
	{
		k = i;
		for (j = i + 1; j < n;j++)
		if (student[j].score > student[k].score)//student[i]和student[k]进行互换；
			k = j;
		temp = student[k]; 
		student[k] = student[i];
		student[i] = temp;
	}
	for (i = 0; i < n; i++)
		printf("%6d %8s %6.2f\n", student[i].num, student[i].name, student[i].score);//逐个输出相关数据；
	printf("\n");
	system("pause");
	return 0;
}