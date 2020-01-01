#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)
int n = 0;
struct student{
	int age;
	long num;
	char name[20];
	unsigned char sex;
	struct student *next;
};

struct student *creat(){                                                //创建链表
	struct student *head, *p1, *p2;
	head = 0;
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%d %ld %s %c", &p1->age, &p1->num, p1->name, &p1->sex);

	while (p1->num != 0){
		n++;
		if (n == 1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		scanf("%d %ld %s %c", &p1->age, &p1->num, p1->name, &p1->sex);

	}
	p2->next = 0;
	return head;
}

struct student *deldate(struct student *p){                             //删除特定链表元素函数
	int dnum;
	printf("请输入要删除的学生的年龄:\n");
	scanf("%d", &dnum);
	struct student *head, *p1, *p2;
	head = p1 = p2 = p;

	while (p1 != 0){
		if (p1->age == dnum) {
			if (head == p1) head = p1->next;
			else p2->next = p1->next;
			p1 = p1->next;
		}
		else {
			p2 = p1;
			p1 = p1->next;
		}
	}


	return head;


}
void print(struct student *p1){                                       //打印链表函数
	while (p1 != 0){
		printf("%d %ld %s %c\n", p1->age, p1->num, p1->name, p1->sex);
		p1 = p1->next;
	}
}
int main()
{
	struct student *head = creat();
	struct student *head1 = deldate(head);
	print(head1);
	return 0;
}