//寒假练习题：合并两个有序数组

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	for (int i = 0; i<n; i++){
		int j = m - 1;
		for (; j >= 0; j--){
			if (nums2[i]<nums1[j]){
				nums1[j + 1] = nums1[j];
			}
			else{
				break;
			}
		}
		nums1[j + 1] = nums2[i];
		m++;
	}
}