#include <stdio.h>
#include <stdlib.h>
#define N 3//����N��ʼֵ��
struct Student//����ṹ�壻
{
	int num;
	char name[20];
	float score[3];
	float aver;
};
int main()
{
	void input(struct Student stu[]);//����input������
	struct Student Max(struct Student stu[]);//����max������
	void print(struct Student stu);//����print������
	struct Student stu[N], *p = stu;//����ṹ�������ָ�룻
	input(p);//����input������
	print(Max(p));//����print������
	system("pause");
	return 0;
}

void input(struct Student stu[])
{
	int i;
	printf("�������ѧ������Ϣ��ѧ�ţ����������ſγɼ�\n");
	for (i = 0; i < N; i++)//������������ѧ���������Ϣ��
	{
		scanf("%d%s%f%f%f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;//����������ŷ�����ƽ������
	}
}

struct Student Max(struct Student stu[])
{
	int i, m = 0;
	for (i = 0; i < N;i++)
	if (stu[i].aver>stu[m].aver)//��m��i���н�����
		m = i;
	return stu[m];
}

void print(struct Student stud)
{
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%5.1f,%5.1f,%5.1f\nƽ���ɼ���%6.2f\n", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}