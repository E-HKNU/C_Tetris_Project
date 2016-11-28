//filename : main.c
// 2016/11/28
// Displaying every shape of TETRIS
// 2016250055 Jinwoo  Hong
// 2016250033 Wooseob Byeon

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  //bool data type 
#include <conio.h>    //input without buffer 

extern bool shape[7][4][4][4];
//4 Dimension array from shapes.c
int main(void)
{
	int style = 0,dir = 0,row,col;
	
	for(style = 0; style < 7; style++)
	{
		for(dir = 0; dir < 4; dir++)
		{
			printf("STYLE : %d\tDIRECTION : %d\n",style,dir);
			for(row = 0; row < 4; row++)
			{
				for(col = 0; col < 4; col++)
				{
					if(shape[style][dir][row][col])
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
		}
	}
	return 0;
}
