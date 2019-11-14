#include <stdio.h>
#include <stdlib.h>
#define N 3//定义N初始值；
struct Student//定义结构体；
{
	int num;
	char name[20];
	float score[3];
	float aver;
};
int main()
{
	void input(struct Student stu[]);//定义input函数；
	struct Student Max(struct Student stu[]);//定义max函数；
	void print(struct Student stu);//定义print函数；
	struct Student stu[N], *p = stu;//定义结构体数组和指针；
	input(p);//调用input函数；
	print(Max(p));//调用print函数；
	system("pause");
	return 0;
}

void input(struct Student stu[])
{
	int i;
	printf("请输入各学生的信息：学号，姓名，三门课成绩\n");
	for (i = 0; i < N; i++)//依次输入三个学生的相关信息；
	{
		scanf("%d%s%f%f%f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;//将输入的三门分数求平均数；
	}
}

struct Student Max(struct Student stu[])
{
	int i, m = 0;
	for (i = 0; i < N;i++)
	if (stu[i].aver>stu[m].aver)//将m和i进行交换；
		m = i;
	return stu[m];
}

void print(struct Student stud)
{
	printf("\n成绩最高的学生是：\n");
	printf("学号：%d\n姓名：%s\n三门课成绩：%5.1f,%5.1f,%5.1f\n平均成绩：%6.2f\n", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}