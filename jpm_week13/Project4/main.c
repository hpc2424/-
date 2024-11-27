#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
};

//pointer
int getArea(struct point* p1, struct point* p2)
{
	int star = (p1->x - p2->x) * (p1->y - p2->y);
	return (int)sqrt(star*star);
}


//not pointer
//int getArea(struct point p1, struct point p2)
//{
//	int star = (p1.x - p2.x) * (p1.y - p2.y);
//	return (int)sqrt(star*star);
//}

void main(void) {
	int area;
	struct point p1, p2;
	struct point* pPtr1 = &p1, *pPtr2 = &p2;


	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	//not pointer
	//area = getArea(p1,p2);
	
	//pointer
	area = getArea(pPtr1, pPtr2);
	
	printf("Area: %d", area);
}
