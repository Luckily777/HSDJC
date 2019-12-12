#include <stdio.h>
#include <stdlib.h>

void average(float* p, int n){
	float* p_end;
	float sum = 0, aver;
	p_end = p + n - 1;//P_end指向最后一个元素
	for (; p <= p_end; p++){
		sum +=(*p);
	}
	aver = sum / n;
	printf("average=%5.2f\n", aver);
}

void search(float(*p)[4], int n){//p指向具有四个元素的一维数组的指针
	int i;
	printf("The score of No.%d are :\n");
	for (i = 0; i < 4; i++){
		printf("%5.2f  ", *(*(p + n) + i));//
	}
	printf("\n");
}

int main(){
	float score[3][4] = { { 65, 67, 70, 60 }, { 80, 87, 90, 81 }, { 90, 99, 100, 98 } };
	average(*score, 12);//求十二个数的平均分
	search(score, 2);//求序号为2的学生成绩
	system("pause");
	return 0;
}