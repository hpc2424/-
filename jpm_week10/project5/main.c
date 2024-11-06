#include <stdio.h>
#define ROWS 3
#define COLS 3

int addMatrix(int a[3][3], int b[3][3], int c[3][3])
{
	int i, j;
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

int printMatrix(int a[3][3])
{
	int i;
	for (i = 0; i<3; i++)
	{
		printf("%3d %3d %3d\n", a[i][0], a[i][1], a[i][2]);
	}
}

int main(void)
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5} };
	
	int B[ROWS][COLS] = {
		{1,0,0},
		{0,1,0},
		{0,0,1} };
	
	int C[ROWS][COLS];
	
	int i,j;
	
	addMatrix(A, B, C);
	printMatrix(C);
	
} 
