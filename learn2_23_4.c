#include <stdio.h>
#include <assert.h>
#include <string.h>
// strcmp  bijiao
int my_strcmp(const char* str1, const char* str2){
	assert(str1&&str2);
	unsigned char* s1 = (unsigned char*)str1;
	unsigned char* s2 = (unsigned char*)str2;

	while (*s1&&*s2)
	{
		if (*s1 > *s2)
		{
			return 1;
		}
		else if (*s1 < *s2)
		{
			return -1;
		}
		else {
			return 0;
		}
	}

	if (*s1 == '\0'&&*s2 == '\0')
	{
		return 0;
	}
	else if(*s1=='\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
	return 0;
}


int main(){
	char *p1 = "hello";
	char *p2 = "world";
	printf("%d\n", my_strcmp(p1, p2));// 大于1 小于-1 等于0
	return 0;
}