#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 20;
	int sum = 0;
	int cover = 0;
	for (n; n > 0; n /=2){
		sum += n;
		if (n % 2 != 0){
			cover++;
			if (cover == 2){
				sum++;
				cover -= 2;
			}
		}
	}
	printf("ºÈÁË%dÆ¿\nÊ£Óà%d¸öÆ¿¸Ç", sum,cover);

	return 0;
}