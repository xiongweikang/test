#include<stdio.h>
void buddle_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0;i < sz - 1;i++) {//确定冒泡排序的趟数
		int j=0;
		int flag = 1;
		for (j = 0;j < sz - 1 - i;j++) {//每一趟冒泡排序
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本躺排序的数据其实不完全有序
			}
		}
		if (flag == 1) {
			printf("排序结果如下:\n");
			break;
			
		}
	}
}
int main() {
	int arr[] = {1, 2 ,5 ,7,5,22,11,33};
	int sz = sizeof(arr) / sizeof(arr[0]);
	buddle_sort(arr, sz);

	for (int i = 0;i < sz;i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}