#include <stdio.h>
#include <stdlib.h>
//�ṹ��Ķ��� �ṹ��ĳ�ʼ��

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
//}S; //S�ǽṹ������
//
////3
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; //S��struct Student���͵Ľṹ�����
//
////4
//struct 
//{
//	char name[128];
//	int  age;
//	char tel[20];
//}S; //S�����������͵Ľṹ�����


//struct Node
//{
//	int date;
//	struct Node* next;
//};����

int main()
{
	struct Student s1;
	//��ʼ��
	s1.age = 12;
	strcpy(s1.name,"xiaoming");
	strcpy(s1.tel,"1319688575");

	struct Student s2 = { "xiaowang", 15, "15158451", {2,3} };
	struct Student copy;
	memcpy(&copy, &s1, sizeof(struct Student));

	system("pause");
	return 0;
}