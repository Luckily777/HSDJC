#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Worker
{
	int num;
	char name[20];
}worker[10];


void Init(int n){
	int i;
	for (i = 0; i < n; i++){
		scanf("%d%s", &worker[i].num, worker[i].name);
	}
}

void Printf(int n){
	int i;
	for (i = 0; i < n; i++){
		printf("工号：%d 姓名：%s\n", worker[i].num, worker[i].name);
	}
}


void Find(int num, int n){
	int left = 0;
	int right = n - 1;
	while (left < right){
		int mid = (left + right) / 2;
		if (worker[mid].num>num){
			right = mid - 1;
		}
		if (worker[mid].num < num){
			left = mid + 1;
		}
		else{
			printf("找到了，它是第%d个.\n", mid);
		}

	}
}

int main(){
	printf("请输入十名工人的信息：\n");
	Init(10);
	printf("十名职工的信息如下：\n");
	Printf(10);
	Find(103, 10);
	system("pause");
	return 0;

}