#include <stdio.h>
#define SIZE 5
int main(void)
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum = 0;
	for (i=0; i<SIZE; i++)
	{
		printf("insert grades: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	average = sum/SIZE;
	printf("average: %d\n", average);
	return 0;
}
