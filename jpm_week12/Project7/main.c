#include <stdio.h>
char* proverb = "All that glisters is not gold.";  

void setPointer(char** q)
{
	*q = proverb;
}

int main(void) {
	char* p = "zzz";
	setPointer(&p);
	printf("%s\n",p);
	
	return 0;
	
}



//void setPointer(char *q)
//{
//	q = proverb;
//}
//
//int main(void) {
//	char* p = "zzz";
//	setPointer(p);
//	printf("%s\n",p);
//	
//	
//	return 0;
//}



//void setPointer(char** q)
//{
//	*q = proverb;
//}
//
//int main(void) {
//	char* p = "zzz";
//	char** r = &p;
//	setPointer(r);
//	printf("%s\n",*r);
//	
//	return 0;
//	
//} 
