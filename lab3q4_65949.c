#include <stdio.h>
int main() {
	int sum, num, count;
	printf("enter a number : \n");
	while(1) {
		scanf("%d", &num);
		if (num > 0) {
			sum += num;
			count++;
		} else {
			break;
		}	
	}
	double average = (double) sum/count;
	printf("summation = %d\n", sum);
	printf("average = %.2f\n", average);
	return 0;
}
