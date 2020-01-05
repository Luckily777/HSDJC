#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *head, struct node *p)
{	//将p指向的结点插入链表，并使链表保持有序 
	struct node *p1, *p2;
	if (head == NULL)	//如果原链表为空 
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
		if (head == p1)	//插在链表首部 
			head = p;
		else
			p2->next = p1;	//插在链表中间 
	}
	else
	{
		p1->next = p;		//插在链表尾结点之后 
		p->next = NULL;
	}
	return head;
}
