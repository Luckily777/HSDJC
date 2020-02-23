#include <stdio.h>
#include <assert.h>
#include <string.h>
// strncpy  kaobeiyidingliang
// strncat  pinjieyidingliang
// strncmp  bijiaoyidingliang

int main(){
	char *p1 = "hellohello";
	char p2[100] = "world";
	strncpy(p2, p1, 5);
	printf("%s\n", p2);

	//strncat(p2, p1, 5);
	//strncmp(p2, p1, 5);
	return 0;
}