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
	struct Student stu_1;//����struct Student ���͵ı���stu_1;
	struct Student *p;//����ָ��struct Student�������ݵ�ָ�����p;
	p = &stu_1;//pָ��stu_1;
	stu_1.num = 10101;
	strcpy(stu_1.name, "ChangHao");//�Խṹ����ر�����ֵ
	stu_1.sex = 'M';
	stu_1.score = 89.5;
	printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);//��������
	printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n", (*p).num, (*p).name, (*p).sex, (*p).score);//��ָ���������������
	system("pause");
	return 0;
}