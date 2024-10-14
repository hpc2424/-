#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k;
	
	printf("Enter a number: ");
	scanf("%d",&i);
	k = 0;
	for(j = 1; j <= i; j++){
	k += j;
	}
	printf("The result is %d", k);
	return 0;
}
