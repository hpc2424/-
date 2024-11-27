#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
};

int main(void) {
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coordinate (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	dist = sqrt((double)(p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	printf("distance: %lf", dist);
	return 0;
}
