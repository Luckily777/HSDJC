#include <stdio.h>
#include <stdlib.h>

int Age(int n){
	int w;
	if (n == 1){
		w = 10;
	}
	else{
		w = Age(n - 1) + 2;//���еݹ�
	}
	return w;
}

int main(){
	printf("%d\n", Age(5));
	system("pause");
	return 0;
}