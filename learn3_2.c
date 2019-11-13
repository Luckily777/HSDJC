#include <stdio.h>
#include <stdlib.h>
struct Student
{
	long num;
	char name[20];
	char sex;
	float score;
};
int main()
{
	struct Student stu_1;//定义struct Student 类型的变量stu_1;
	struct Student *p;//定义指向struct Student类型数据的指针变量p;
	p = &stu_1;//p指向stu_1;
	stu_1.num = 10101;
	strcpy(stu_1.name, "ChangHao");//对结构体相关变量赋值
	stu_1.sex = 'M';
	stu_1.score = 89.5;
	printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);//输出结果；
	printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n", (*p).num, (*p).name, (*p).sex, (*p).score);//按指针类型输出函数；
	system("pause");
	return 0;
}