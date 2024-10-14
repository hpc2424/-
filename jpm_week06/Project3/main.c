#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i = 0;
	
	printf("Input a string: ");
	while( (c=getchar()) != '\n'){
	if ( 48 <= c && c <= 57 )
	i++;
	}
	printf("%d", i);
	
	return 0;
}
