#include <stdio.h>
int main(){
	struct{
		char *name;  //����
		int num;  //ѧ��
		int age;  //����
		char group;  //����С��
		float score;  //�ɼ�
	} stu1;
	//���ṹ���Ա��ֵ
	stu1.name = "Tom";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 136.5;
	//��ȡ�ṹ���Ա��ֵ
	printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
	return 0;
}