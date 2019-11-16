#include <stdio.h>
#include <stdlib.h>

int main(){
	char c1, c2, c3, c4, c5;
	printf("请输入五个字母的密码：\n");
	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
		c1 += 4;//逐次往后加4；
		c2 += 4;
    	c3 += 4;
		c4 += 4;
		c5 += 4;
		printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
	system("pause");
	return 0;
}