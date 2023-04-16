#include<stdio.h>
int main() {
	int N;
	int s1 = 1;
	int s2 = 1;
	int flag = 1;
	int count = 0;
	float sum = 0;
	scanf_s("%d", &N);
	int i = 0;
	for (i = 1;i <= N;i++) {
		sum = sum + (flag * s1*1.0) / s2;
		s1 = s1 + 1;
		s2 = s2 + 2;
		flag = -flag;

	}
	printf("%.3f", sum);
	return 0;
}