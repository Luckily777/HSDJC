#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int num;
	char name[20];
	float score;
}student[5] = { { 10101, "zhang", 78 }, { 10103, "wang", 98.5 }, { 10106, "li", 86 }, { 10108, "ling", 73.5 }, { 10110, "sun", 100 } };//����ṹ�壬�������ֵ��
int main()
{
	int i, j,k;
	struct Student temp;//����ṹ�����temp��������ʱ������
	const int n = 5;//���峣����5��
	printf("The order is:\n");
	for (i = 0; i < n - 1;i++)
	{
		k = i;
		for (j = i + 1; j < n;j++)
		if (student[j].score > student[k].score)//student[i]��student[k]���л�����
			k = j;
		temp = student[k]; 
		student[k] = student[i];
		student[i] = temp;
	}
	for (i = 0; i < n; i++)
		printf("%6d %8s %6.2f\n", student[i].num, student[i].name, student[i].score);//������������ݣ�
	printf("\n");
	system("pause");
	return 0;
}