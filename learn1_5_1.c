#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *head, struct node *p)
{	//��pָ��Ľ�����������ʹ���������� 
	struct node *p1, *p2;
	if (head == NULL)	//���ԭ����Ϊ�� 
	{
		head = p;
		p->next = NULL;
		return head;
	}
	p2 = p1 = head;
	while ((p->data)>(p1->data) && (p1->next != NULL))
	{
		p2 = p1;
		p1 = p1->next;
	}
	if ((p->data) <= (p1->data))
	{
		p->next = p1;
		if (head == p1)	//���������ײ� 
			head = p;
		else
			p2->next = p1;	//���������м� 
	}
	else
	{
		p1->next = p;		//��������β���֮�� 
		p->next = NULL;
	}
	return head;
}
