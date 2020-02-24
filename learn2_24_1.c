#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
// strerror 

int main(){
	FILE *pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)//errno  Êä³ö´íÎóµÄÊı×Ö
		printf("Error opening file unexist.ent:%s\n", strerror(errno));
	system("pause");
	return 0;
}