#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);
	printf("\n& result is %d", a & b);
	printf("\n| result is %d", a | b);
	printf("\n^ result is %d", a ^ b);
	printf("\n<<1 result is %d", a <<1);
	printf("\n>>1 result is %d", a >>1);
	return 0;
}
