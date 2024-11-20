#include <stdio.h>

int main(void) {
	FILE* fp;
	int i;
	char word[100];
	fp = fopen("week11-5.txt", "w");
	
	for(i = 0; i<3; i++)
	{
		printf("intput a word : ");
		scanf("%s", word);
		
		fprintf(fp,"%s\n",word);
	}
	
	fclose(fp);
	
	
	return 0;
}
