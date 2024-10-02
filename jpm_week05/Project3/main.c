#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min;
	printf("Input the second: ");
	scanf("%d",&min);
	printf("\nThe time is %d : %d", min/60, min - (min/60)*60);
	return 0;
}
