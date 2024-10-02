#include <stdio.h>

int main(void){
	float one, two, result;
	
	printf("enter two integers: ");
	scanf("%f, %f", &one, &two);
	result = one / two;
	printf("%f / %f = %f", one, two, result);
	result = 0;
	
}
