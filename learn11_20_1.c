#include <stdio.h>
#include <stdlib.h>

int main(){
	char c;
	printf("Enter the char:\n");
	c = getchar();
	while (c!= '\n')
	{if ((c >= 'a' && c <= 'z') || (c >= 'A'&&c <= 'Z')){
			if ((c >= 'w'&& c <= 'z') || (c >= 'W'&& c <= 'Z'))
				c = c - 22;//��26����ĸ�γ���
	         else c = c + 4;
			}
			
		printf("%c", c);
		c = getchar();//��ȡ��һ����ĸ
	}
	printf("\n");
	system("pause");
	return 0;
}