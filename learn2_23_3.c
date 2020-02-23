#include <stdio.h>
#include <assert.h>
#include <string.h>
// strcat  zhuijia pinjie 
char* my_strcat(char* dst, const char* src){
	assert(dst&&dst);
	char *ret = dst;
	while (*dst != '\0')
	{
		++dst;
	}
	while (*dst++ = *src++);//ÔËËã·û
	//while (*src != '\0'){
	//	*dst = *src;
	//	++dst;
	//	++src;
	//}  
	//*dst = *src;
	return ret;
}


int main(){
	char *p1 = "hello";
	char p2[11] = "world";

	//strcpy(p2,p1);
	strcat(p2, p1);
	return 0;
}