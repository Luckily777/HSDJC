#include <stdio.h>
#include <stdlib.h>

int main(){
	int f1 = 1, f2 = 1,f3;
	int i;
	printf("%12d\n%12d\n", f1, f2);
	for (i = 1; i <= 38; i++){
		f3 = f1 + f2;
		printf("%12d\n", f3);
		f1 = f2;//将2的值给1；
		f2 = f3;//将3的值给2；
	}
	system("pause");
	return 0;
}