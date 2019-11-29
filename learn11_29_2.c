#include <stdio.h>
#include <stdlib.h>

int main(){
	int count = 0;
	int num;
	scanf("%d", &num);//发现在存储器之中负数的存放形式是以补码的形式存放
	for (int i = 0; i < 32; i++){
		if ((num&(1 << i)) != 0){//按位进行左移运算
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}