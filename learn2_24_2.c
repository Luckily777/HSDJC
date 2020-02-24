#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
// memcpy ËùÓÐµÄ¿½±´  

void *my_memcpy(void*dst, const void *src, size_t num)
{
	assert(dst&&src);
	char * str_dst = (char*)dst;
	char * str_src = (char*)src;
	for (size_t i = 0; i < num; i++)
	{
		str_dst[i] = str_src[i];
	}
	return dst;
}


struct Student
{
	char _name[10];
	int _age;
}s1;


int main(){
	int a1[10] = { 1, 2, 3, 4, 5 };
	int a2[10];
	memcpy(a2, a1,10*sizeof(int));


	struct Student s2;
	struct Student s1 = { "peter", 18 };
	strcpy(s1._name, s1._name);
	s2._age = s1._age;
	memcpy(&s2, &s1, sizeof(struct Student));
	return 0;
}