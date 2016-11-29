//filename : main.c
// 2016/11/28
// Displaying, rotating every shape of TETRIS
//
// 2016250055 Jinwoo  Hong
// 2016250033 Wooseob Byeon

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  //bool data type 
#include <conio.h>    //input without buffer 
#include <time.h>     
void display(int style, int dir);
//Function for displaying current style & direction
void rotate(char ch, int *dir);
//rotate current style shape to clock, anticlockwise
extern bool shape[7][4][4][4];
//4 Dimension array from shapes.c
int main(void)
{
	int style = 0,dir = 0;
	char ch;
	
	srand(time(NULL));
	
	while(ch != '#')
	{   //to stop press '#'
		if(ch == 'n')
			style = rand() % 7;
		    //press 'n' for new style
		display(style,dir);
		//display current shape
		ch = getch();
		//bufferless input
		rotate(ch, &dir);
		//when getch() gets 'q','e'
		//rotate current shape to clock, anticlock wise 
	}
	return 0;
}

void display(int style, int dir)
{
	int row,col;
	
	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 4; col++)
		{
			if(shape[style][dir][row][col])
				printf("= ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return;
}

void rotate(char ch, int *dir)
{
	switch(ch)
	{
		case'e':
			(*dir)++;
			break; //clockwise
		case'q':
			(*dir)--;
			break; //anticlockwise
	}
	if(*dir == -1)
		*dir = 3;
	*dir = *dir % 4;
	//dir must go 3 0 1 2 3 0
	//           -1 0 1 2 3 4
	return;
}


