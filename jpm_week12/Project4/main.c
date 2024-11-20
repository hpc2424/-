#include <stdio.h>

int main(void) {
	int i, sum = 0;
	int grade[5];
	int* pt;
	
	for (i=0;i<5;i++)
	{
		printf("Input value = grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	pt = grade;
	
	for (i = 0; i<5; i++)
	{
		printf("grade[%d] = %d\n", i, *(pt+i));
		sum += *(pt + i);
	}
	
	
	
	printf("average = %d",sum / 5);
	return 0;
}
