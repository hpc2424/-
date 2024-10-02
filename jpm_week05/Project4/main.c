#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, tf;
	printf("Input the year: ");
	scanf("%d", &year);
	tf = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	printf("\nIs the year %d the leap year? %d", year, tf);
	return 0;
}
