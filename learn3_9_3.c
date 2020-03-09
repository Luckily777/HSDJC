#include <stdio.h>
#include <stdlib.h>
//

int main() {
    char str[5]="abc";
    int i = strlen(str) - 1;
    while (i >= 0) {
        str[i + 1] = str[i]; 
        i--;
    }
    str[i+1]='*';
    printf("%s\n", str);
	system("pause");
	return 0;
}