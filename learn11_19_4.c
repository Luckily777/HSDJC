#include <stdio.h>
#include <stdlib.h>

void Factor(int a[], int n){
	int i, j;
	int temp = 0;
	for (i = 0; i <= n - 1; i++){
		for (j = 0; j < i; j++){
			if (a[j]>a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(){
	int i;
	int a[10] = { 2, 4, 6, 8, 0, 1, 3, 5, 7, 9 };
	FILE *f;//定义文件指针首地址
	if ((f = fopen("myf1.out", "w")) == NULL){//以只写的方式打开文件；
		printf("can not open file.\n");
		exit(0);
	}
	Factor(a, 10);
	for (i = 0; i < 10; i++){
		printf("%4d ", a[i]);//打印显示在屏幕上；
		fprintf(f, "%d4 ", a[i]);//输出到文件之中；
	}
	fclose(f);// 切记，一定要在最后关闭文件；
	system("pause");
	return 0;
}