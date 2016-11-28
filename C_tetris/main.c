//filename : main.c
// 2016/11/28
// Displaying J_shape.
// 2016250055 Jinwoo  Hong
// 2016250033 Wooseob  Byeon

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <math.h>

extern bool J_shape[4][3][3]; //from shapes.c
extern bool L_shape[4][3][3];
extern bool I_shape[4][4][4]; 
extern bool O_shape[4][2][2]; 						 				     
extern bool S_shape[4][3][3]; 
extern bool T_shape[4][3][3]; 
extern bool Z_shape[4][3][3]; 

int main(void)
{
	int dim = 0,row,col;
	char ch;
	while(ch != '#')
	{
		printf("dim : %d\n",dim);
		for(row = 0; row < 3; row++)
		{
			for(col = 0; col < 3; col++)
			{
				if(J_shape[dim][row][col])
				{
					printf("= ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
		ch = getch();
		switch(ch)
		{
			case 'e':
				printf("going right\n");
				dim--;
				break;
			case 'q':
				printf("going left\n");
				dim++;
				break;
			default:
				break;
		}
		if(dim == -1)
			dim = 3;
		dim = dim % 4;
	}
	return 0;
	
}
