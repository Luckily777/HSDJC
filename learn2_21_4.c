#include <stdio.h>
#include <stdlib.h>
//

int main(){
	int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr1 = (int *)(&a + 1);//10后面的那个元素的地址
	int *ptr2 = (int *)(*(a + 1));//6的地址  等价于a[1] 
	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10  5
	system("pause");
	return 0;
}