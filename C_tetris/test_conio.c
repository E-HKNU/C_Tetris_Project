/***************************
*��ǻ�Ͱ��а� 16�й� ȫ����*
***************************/
#include<stdio.h>
#include<conio.h>
//conio.h ������� ���� 
int main(void)
{
	printf("��ǻ�Ͱ��а� 16�й�\n");
	printf("ȫ���찡 ���α׷����߽��ϴ�.\n");
	char ch;
	while(ch != '#')
	{   //#�� ch�� ����ɰ�� 0��ȯ 
		ch = getch();
		printf("%c\n",ch);
	}   //���ھ����Է� getch�� ����ؼ� �Է��Ҷ����� while�� �ݺ� 
	
	
	
	return 0;
}

