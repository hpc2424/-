#include <stdio.h>

int main(void){
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt","r");
	if (fp == NULL)
		printf("cannot open file\n");
		
// �� ���ھ� �о�ͼ� ��� 
//	while((c = fgetc(fp)) != EOF)
//		printf("%c",c);
//	
//	fclose(fp);

// �� �ܾ �о�ͼ� ��� 
	char range[100];
	while (fgets(range, 100, fp) != NULL)
		printf("%s",range);
	
	fclose(fp);
	return 0;
}
