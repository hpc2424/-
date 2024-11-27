#include <stdio.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM];
	
	int i, sum = 0;
	for(i = 0; i<STUDENTNUM; i++)
	{
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d",&s[i].score);
		
		sum += s[i].score;
		
	}
	
	printf("The average of the score: %f",(float)sum / STUDENTNUM);
	
	for(i = 0; i<STUDENTNUM; i++){
		if((s[i].score >= s[0].score) && (s[i].score >= s[1].score) \
		&& (s[i].score >= s[2].score) && (s[i].score >= s[3].score))
		printf("\nThe highest score - ID: %d, score: %d", s[i].ID, s[i].score);
	}
}
