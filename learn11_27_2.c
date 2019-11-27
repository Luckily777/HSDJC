#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	int a, b, c;
	int number;
	while (1){
		a = 0; b = 0; c = 0;
		scanf("%d", &n);//输入n个数
		if (n == 0){
			break;
		}
		for (i = 0; i < n; i++){
			scanf("%d", &number);
			if (number < 0){//负数的个数
				a++;
			}
			else if (number == 0){//零的个数
				b++;
			}
		else//正数的个数
			c++;
		}
		printf("负数个数为：%d\n零的个数为：%d\n正数的个数为：%d\n", a, b, c);
	}
	system("pause");
	return 0;
}