#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n;
	printf("��������Ҫ���������:\n");
	scanf("%d", &n);
	printf("90=");
	for (i = 2; i <= n; i++){
		while (n >i){
			if (n%i == 0){
				printf("%d*", i);
				n = n / i;
			}
			else{
				break;
			}
			}	
		
	}
    printf("%d\n", n);
	system("pause");
	return 0;
}