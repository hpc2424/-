#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dap = 34, get = 0, i=0;
	
	while (get != dap)
	{
	printf("Guess a number: ");
	scanf("%d", &get);
	if(get < dap)
		printf("Low!\n");
	else if(get > dap)
		printf("High!\n");
	else
		printf("Congratulation! Trials: %d", i);
	i++;
	}
	return 0;
}
