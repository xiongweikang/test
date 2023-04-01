#include<stdio.h>
#include<stdlib.h>
int count_bid_one(unsigned  int a) {
	int count = 0;
	while(a) {
		if (a % 2 == 1) {
			count++;
	   }
		a = a / 2;
		
	}
	return count;
}
int main() {
	int a = 0;
	scanf_s("%d", &a);
	int count=count_bid_one(a);
	printf("%d\n", count);
	system("pause");//system库函数-执行命令暂停-pause（暂停）
	return 0;
}