#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void) 
{
	int f,s;
	printf("Enter the integers: ");
	scanf("%d %d", &f, &s);
	printf("Result - Sum: %d, Square: %d, Max: %d", sumTwo(f,s), square(f), get_max(f,s));
	return 0;
}

int sumTwo(int a, int b)
{
	return (a+b);
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if (x>y)
	return x;
	if (x<y)
	return y;
}
