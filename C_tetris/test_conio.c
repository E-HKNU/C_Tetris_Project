/***************************
*컴퓨터공학과 16학번 홍진우*
***************************/
#include<stdio.h>
#include<conio.h>
//conio.h 헤더파일 실험 
int main(void)
{
	printf("컴퓨터공학과 16학번\n");
	printf("홍진우가 프로그래밍했습니다.\n");
	char ch;
	while(ch != '#')
	{   //#이 ch에 저장될경우 0반환 
		ch = getch();
		printf("%c\n",ch);
	}   //에코없는입력 getch를 사용해서 입력할때마다 while문 반복 
	
	
	
	return 0;
}

