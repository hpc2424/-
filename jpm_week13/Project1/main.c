#include <stdio.h>

struct student {
	int ID;
	char name[100];
	float grade;
};


int main(void) {
	
	struct student stst = {0,"",0};
	
	printf("ID: ");
	scanf("%d",&stst.ID);
	printf("name: ");
	scanf("%s",stst.name);
	printf("grade: ");
	scanf("%f",&stst.grade);
	
	printf("\n\n");
	
	printf("ID: %d\nname: %s\ngrade: %f",stst.ID, stst.name, stst.grade);
		
	return 0;
}
