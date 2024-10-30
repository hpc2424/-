//int main(void){
//	int flag = 1;
//	while(flag!=0)
//	{
//		int y;
//		y = 3;
//		flag = 0;
//	}
//	y = 4;
//}

//y의 범위는 while 블록이기 때문에 while 블록 밑의 y=4; 는 선언되지 않은 변수임
//따라서 int y 를 while 문 앞으로 이동시킴. 


int main(void){
	int flag = 1;
	int y;
	while(flag!=0)
	{
		y = 3;
		flag = 0;
	}
	y = 4;
}
