// 2016250055 Jinwoo
// 2016250033 Wooseob 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

extern bool J_shape[4][3][3];
extern bool L_shape[4][3][3];
extern bool I_shape[4][4][4]; 
extern bool O_shape[4][2][2]; 						 				     
extern bool S_shape[4][3][3]; 
extern bool T_shape[4][3][3]; 
extern bool Z_shape[4][3][3]; 

int main(void)
{
	int dim, row, col;
	
	printf("");
	for(dim = 0; dim < 4; dim++)
	{
		printf("DIM : %d\n",dim+1);
		for(row = 0; row < 3; row++)
		{
			for(col = 0; col < 3; col++)
			{
				if(Z_shape[dim][row][col]==1)
				{
					printf("= ");
				}
				else
					printf("  "); 
			}
			printf("\n");
		}
	}
	return 0;
}

