#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	
	for (i = 0; i < 5; i++)
	{
	grade[i] = (i+1)*10;
	}
	
	for (i = 0; i < 5; i++)
	{
	printf("grade[%d] = %d\n", i, grade[i]);
	}

	
}
