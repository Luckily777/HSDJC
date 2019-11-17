#include <stdio.h>
#include <stdlib.h>

int Find(int arr[], int n,int f){
	int left = 0;
	int right = n - 1;
	int mid;
	while (left < right){
		mid = (left + right) / 2;
		if (f>arr[mid]){
			left = mid + 1;
		}
		else if (f < arr[mid]){
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main(){
	int arr[10] = { 2, 5, 9, 11, 13, 15, 19, 20, 28, 29 };
	printf("所需要找的数在第%d个\n", Find(arr,10,28));
		system("pause");
	return 0;
}