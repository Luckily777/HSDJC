#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, k;
	int total = 0;
	int result = 0;
	scanf("%d%d", &n, &k);
	if (n < k){
		result = 2;
	}
	else{
		total = 2 * n;
		result = total / k;
		if (total / k != 0){
			result++;
		}
}
      printf("%d", result);
      system("pause");
      return 0;
}