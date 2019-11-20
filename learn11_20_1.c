#include <stdio.h>
#include <stdlib.h>

int main(){
	char c;
	printf("Enter the char:\n");
	c = getchar();
	while (c!= '\n')
	{if ((c >= 'a' && c <= 'z') || (c >= 'A'&&c <= 'Z')){
			if ((c >= 'w'&& c <= 'z') || (c >= 'W'&& c <= 'Z'))
				c = c - 22;//将26个字母形成链
	         else c = c + 4;
			}
			
		printf("%c", c);
		c = getchar();//读取下一个字母
	}
	printf("\n");
	system("pause");
	return 0;
}