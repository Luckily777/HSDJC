#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size){
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}
	return ret;
}

int main(){
	int arr[5] = { 1, 2, 1, 2, 3 };
	int n = Func(arr, 5);
	printf("%d", n);
	system("pause");
	return 0;
}