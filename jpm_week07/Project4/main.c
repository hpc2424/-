#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(int a)
{
	printf("Enter the value: ");
	scanf("%d", &a);
}

int Comb(int a, int b)
{
	return (Pac(a)/(Pac(a-b)*Pac(b)));
}

int Pac(int a)
{
	int j = 1;
	for(int i=a;i>0;i--)
	j = j*i;
	return j;
	
}

int main(int argc, char *argv[]) {
	int n, r;
	get_integer(n);
	get_integer(r);
	printf("The result of C(%d, %d) is %d.", n, r, Comb(n,r));
	
	return 0;
}
