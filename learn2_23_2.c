#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//strcpy的实现
char* my_strcpy(char*dst, const char* src)
{
	assert(dst != NULL);
	assert(src != NULL);
	char* ret = dst;
	while (*src != '\0')
	{
		*dst = *src;
		++src;
		++dst;
	}
	*dst = '\0';
	return ret;
}

//库函数
//char* my_strcpy(char *dst,const char *src){
//	assert(dst != NULL);
//	assert(src != NULL);
//
//	char *ret = dst;
//	while (*dst++ = *src++);  先++ 但是解引用的是++之前的值 
//	return ret;
//}


//char *p1=NULL;
//const char *p2=NULL;
//p1=p2; buxing 
//p2=p1; xing


int main(){
	char p1[] = "hello";
	char p2[] = "world";
	/*strcpy(p2, p1);*/
	my_strcpy(p2, p1);
	printf("%s\n", p2);
	system("pause");
	return 0;
}