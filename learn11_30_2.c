#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Size 7

void Swap(char *str1, char *str2, int size){
	int i;
	char temp;
	for (i = 0; i < size; i++){
		temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;
		
	}
	printf("str1=");
	for (i = 0; i < Size; i++){
        printf("%c", str1[i]);
	}
	printf("\n");
	printf("str2=");
	for (i = 0; i < Size; i++){
		printf("%c", str2[i]);
	}
}

int main(){
	char str1[Size] = "abcdefg";
	char str2[Size] = "hijklmn";
	Swap(str1, str2, Size);
	system("pause");
	return 0;

}