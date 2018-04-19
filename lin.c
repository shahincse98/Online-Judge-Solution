#include <stdio.h>

int main()
{
	int n, i, k, j = 0;
	printf("Enter number of element\n");
	scanf("%d", &n);
	int a[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);	
	}

	printf("The number are\n");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);	
	}

	printf("\nEnter find the number: ");
	scanf("%d", &k);

	for(i = 0; i < n; i++) {
		if(a[i] == k) {
			j++;
			printf("The number is found at location %d\n", i+1);
			break;
		}
	}

	if(j == 0) {
		printf("The number is not found\n");
	}

	return 0;	
}
