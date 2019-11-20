#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,j=0;
	int x, y=0;
	printf("Enter a Number:\n");
	    scanf("%d", &i);
		while (i!=0){
			x = i % 10;//除10求余取得个位
			y += x*pow(16, j);//乘以进制；
			i /= 10;//求上一位
				j++;
	}
	printf("输出十进制数为：%d\n",y);
	system("pause");
	return 0;
}