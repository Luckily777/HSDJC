#include <stdio.h>
#include <stdlib.h>
//结构体的定义 结构体的初始化

//1
struct Student
{
	char name[128];
	int age;
	char tel[20];
	struct School p;
};

struct School
{
	int age;
	int size;
}p;
////2
//typedef struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; //S是结构体类型
//
////3
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; //S是struct Student类型的结构体变量
//
////4
//struct 
//{
//	char name[128];
//	int  age;
//	char tel[20];
//}S; //S是无类型类型的结构体变量


//struct Node
//{
//	int date;
//	struct Node* next;
//};链表

int main()
{
	struct Student s1;
	//初始化
	s1.age = 12;
	strcpy(s1.name,"xiaoming");
	strcpy(s1.tel,"1319688575");

	struct Student s2 = { "xiaowang", 15, "15158451", {2,3} };
	struct Student copy;
	memcpy(&copy, &s1, sizeof(struct Student));

	system("pause");
	return 0;
}