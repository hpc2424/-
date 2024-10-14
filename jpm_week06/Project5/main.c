#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

int main(int argc, char *argv[]) {
	int one, two;
	char how;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &one, &how, &two);
	switch(how){
		case '+':
			printf("=%d", one + two);
			break;
		case '-':
			printf("=%d", one - two);
			break;
		case '*':
			printf("=%d", one * two);
			break;
		case '/':
			printf("=%d", one / two);
			break;
		case '%':
			printf("=%d", one % two);
			break;
	}
	return 0;
}
