#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(char *p1, char *p2){//交换函数
	char arr[10];
	strcpy(arr, p1);
	strcpy(p1, p2);
	strcpy(p2, arr);
}

int main(){
	char str1[20];
	char str2[20];
	char str3[20];
	printf("please enter 3 string:");//输入三个字符串
	gets(str1);
	gets(str2);
	gets(str3);
	printf("new order is:\n");
	if (strcmp(str1, str2)>0){//字符串进行比较
		Swap(str1, str2);//进行交换
	}
	if (strcmp(str1, str3)>0){
		Swap(str1, str3);
	}
	if (strcmp(str2, str3)>0){
		Swap(str2, str3);
	}
	printf("%s\n%s\n%s\n", str1, str2, str3);
	return 0;
}