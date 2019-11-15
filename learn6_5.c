#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int temp = 0;
	int a, b, c;
	for (i = 100; i <= 1000; i++){
		a = i % 10;//求得个位；
		b = (i / 10) % 10;//求得十位；
		c = i /100;//求得百位；
		if (i == a*a*a + b*b*b + c*c*c)
			printf("%d是水仙花数\n", i);
	}
	system("pause");
	return 0;
}