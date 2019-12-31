#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
	int id;
	char name[1024];
	int score[3];
	struct student* next;
};
typedef struct student stu;
stu* creat(int n) {//��������
	stu* s;
	stu* head;
	stu* p;
	s = (stu*)malloc(sizeof(stu));
	head = s;
	p = head;
	for (int i = 0; i < n; ++i) {
		s = (stu*)malloc(sizeof(stu));
		printf("�������%d��ѧ������Ϣ\n", i + 1);
		printf("������ѧ��\n");
		scanf("%d", &s->id);
		printf("����������\n");
		scanf("%s", &s->name);
		for (int j = 0; j < 3; ++j) {
			printf("�������%d�ſεĳɼ�\n", j + 1);
			scanf("%d", &s->score[j]);
		}
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
	for (stu* p = head->next; p != NULL; p = p->next) {
		printf("%d\t%s\t%d\t%d\t%d\n", p->id, p->name, p->score[0], p->score[1], p->score[2]);
	}
}
void swap(stu* p, stu* q) {//��������
	p->id = p->id^q->id;
	q->id = p->id^q->id;
	p->id = p->id^q->id;
	char temp[1024];
	strcpy(temp, p->name);
	strcpy(p->name, q->name);
	strcpy(q->name, temp);
	for (int i = 0; i < 3; ++i) {
		p->score[i] = p->score[i] ^ q->score[i];
		q->score[i] = p->score[i] ^ q->score[i];
		p->score[i] = p->score[i] ^ q->score[i];
	}
}
void fun(stu* a, stu* b) {//�ϲ�������
	stu* p;
	for (p = a; p->next != NULL; p = p->next);//�ҵ�a�����һ��ָ��
	p->next = b->next;//����ָ��b
	free(b);
	for (p = a->next; p != NULL; p = p->next) {
		for (stu* q = p->next; q != NULL; q = q->next) { //
			if (p->id > q->id) {
				swap(p, q);
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
	printf("����aѧ����Ϣ\nѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\n");
	print(a);
	printf("����bѧ����Ϣ\nѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\n");
	print(b);
	printf("�ϲ������Ϊ\nѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\n");
	fun(a, b);
	print(a);
	system("pause");
}
