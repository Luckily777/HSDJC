#include <stdio.h>
#include <stdlib.h>

void PrintfNum(int *str, int n, int k, int start, int ans){//ǰ����Ϊ����Դ������������Ϊ
	if (k <= 0){
		printf("%d\n", ans);//����ִ��
		return;
	}
	int i;
	for (i = start; i < n; i++){//ÿ��ѭ����ѭ��ͷ
		PrintfNum(str, n, k - 1, i + 1, ans + str[i]);
	}
}


int main(){
	int i, j;
	int n;
	int k;
	int str[32] = { 0 };
	scanf("%d%d", &n,&k);
	for (i = 0; i < n; i++){
		scanf("%d", str + i);
	}
	PrintfNum(str, n, k, 0, 0);
	system("pause");
	return 0;

}