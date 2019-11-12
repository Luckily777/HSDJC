#include <stdio.h>
int main(){
	struct Student{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a = {10011, "Chang Hao", 'M', "123 BeijingRoad"};
	printf("NO:%ld\nn=Name:%s\nSex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
	system("pause");
	return 0;
}
