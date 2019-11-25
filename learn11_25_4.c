#include <stdio.h>
#include <stdlib.h>

int StrlenNr(const char *str){
	int i;
	for (i = 0; str[i]; i++);
		return i;
}

int StrlenNR(const char *str){
	if (*str){
		return 1 + StrlenNR(str + 1);
	}
	return 0;
}

int main(){
	printf("%d\n",StrlenNr("caixukun"));
	printf("%d\n",StrlenNR("caixukun"));
	system("pause");
	return 0;
}