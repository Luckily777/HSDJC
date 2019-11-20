#include <stdio.h>
#include <stdlib.h>

void Sort(int arr[], int n){
	int i, j, temp=0;
	for (i = 0; i < n - 1; i++){
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr[i]){//拿第一个和第0个作比较，将小的放到0的位置上去。
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("The sorted array:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int a[10];
	printf("Enter a array:\n");
	int i;
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	Sort(a, 10);
	printf("\n");
	system("pause");
	return 0;
}