#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N sizeof(stu)
struct student {
	int id;
	char name[1024];
	struct student* next;
};
typedef struct student stu;
stu* creat(int n) {//����
	stu* head;
	stu* s = (stu*)malloc(N);
	head = s;
	stu* p = head;
	for (int i = 0; i < n; ++i) {
		s = (stu*)malloc(N);
		printf("�������%d��ѧ������Ϣ\n", i + 1);
		printf("������ѧ��\n");
		scanf("%d", &s->id);
		printf("����������\n");
		scanf("%s", &s->name);
		s->next = p->next;
		p->next = s;
		p = p->next;
		if (i == n - 1) {
			p->next = NULL;
		}
	}
	return head;
}
void print(stu* head) {//���
	int n = 0;
	for (stu* p = head->next; p != NULL; p = p->next, n = 1) {
		printf("%d\t%s\n", p->id, p->name);
	}
	if (n == 0) {
		printf("����Ϊ��\n");
	}
}
void fun(stu* a, stu* b) {
	stu* temp;
	for (stu* p = a; p->next != NULL;) {
		for (stu* q = b; q->next != NULL; q = q->next) {
			if (p->next->id == q->next->id) {
				temp = p->next;
				p->next = temp->next;
				free(temp);
				break;
			}
			if (q->next->next == NULL) {
				p = p->next;
			}
		}
	}
}
void main() {
	int n, m;
	printf("����������a�ĳ���\n");
	scanf("%d", &n);
	printf("����������b�ĳ���\n");
	scanf("%d", &m);
	printf("����������a�е�ѧ����Ϣ\n");
	stu* a = creat(n);
	printf("����������b�е�ѧ����Ϣ\n");
	stu* b = creat(m);
	printf("����aѧ����Ϣ\nѧ��\t����\n");
	print(a);
	printf("����bѧ����Ϣ\nѧ��\t����\n");
	print(b);
	printf("ɾ����ͬѧ�ź�a����Ϊ\nѧ��\t����\n");
	fun(a, b);
	print(a);
	system("pause");
}
