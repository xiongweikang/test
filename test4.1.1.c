#include<stdio.h>
void reverse(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	
	while (left<right) {
		
		
			int tem = arr[left];
			arr[left] = arr[right];
			arr[right] = tem;
			left++;
			right--;
		
	}
}
void Init(int arr[], int sz) {
	int i = 0;
	for (i = 0;i < sz;i++) {
		arr[i] = 0;
	}
}
	void print(int arr[], int sz) {
		int i = 0;
		for (i = 0;i < sz;i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

int main() {
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr,sz);
	print(arr, sz);
	Init(arr, sz);
      print(arr, sz);
	return 0;
}