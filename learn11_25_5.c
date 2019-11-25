#include <stdio.h>
#include <stdlib.h>
int Strlen(const char *str){
	if (*str){
		return 1 + Strlen(str + 1);
	}
	return 0;
}


void reverse_string(char *str){
	if (*str){
		int i = Strlen(str)-1;
		char temp;

		temp = str[0];
		str[0] = str[i];
		str[i] = '\0';
		reverse_string(str + 1);
		str[i] = temp;
	}
}

int main(){
	char str[20] = "qiaobiluo";
	reverse_string(str);
	puts(str);
	system("pause");
	return 0;
}