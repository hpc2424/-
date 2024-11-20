#include <stdio.h>

int main(void){
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt","r");
	if (fp == NULL)
		printf("cannot open file\n");
		
// 한 글자씩 읽어와서 출력 
//	while((c = fgetc(fp)) != EOF)
//		printf("%c",c);
//	
//	fclose(fp);

// 한 단어씩 읽어와서 출력 
	char range[100];
	while (fgets(range, 100, fp) != NULL)
		printf("%s",range);
	
	fclose(fp);
	return 0;
}
