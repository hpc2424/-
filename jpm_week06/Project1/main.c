#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("Enter an integer: ");
	scanf("%d", &i);
	if (i < 0)
		printf("this is negative.");
		
	else if (i = 0)
		printf("this is 0");
		
	else
		printf("this is positive");	
	
	return 0;
}
