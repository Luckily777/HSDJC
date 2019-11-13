#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
};	
struct Student stu[3] = { { 10101, "li lin", 'M', 18 }, { 10102, "zhang feng", 'M', 19 },{10103,"Wang Min",'F',20} };//定义struct Student 类型的变量stu[3]数组三个初始化;
int main()
{

	struct Student *p;//定义指向struct Student类型数据的指针变量p;
	printf("No.  Name                sex age\n");
	for (p = stu; p < stu + 3; p++)
		printf("%5d%-20s%2c%4d\n", p->num, p->name, p->sex, p->age);
	system("pause");
	return 0;
}