#include <stdio.h>
#include <stdlib.h>

void Sort(int arr[], int n){
	int i, j, temp=0;
	for (i = 0; i < n - 1; i++){
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr[i]){//�õ�һ���͵�0�����Ƚϣ���С�ķŵ�0��λ����ȥ��
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