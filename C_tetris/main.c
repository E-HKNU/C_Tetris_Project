#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	bool J_shape[3][3] = {{0,0,1},  //001
						  {0,0,1},  //001
						  {0,1,1}}; //011
	
	bool L_shape[3][3] = {{1,0,0},  //100
						  {1,0,0},  //100
						  {1,1,0}}; //110
	
	bool I_shape[4][4] = {{1,0,0,0},  //1000
						  {1,0,0,0},  //1000
						  {1,0,0,0},  //1000
						  {1,0,0,0}}; //1000
	
	bool O_shape[2][2] = {{1,1}       //11
					     ,{1,1}};     //11
					     
	bool S_shape[3][3] = {{0,1,1},    //11
						  {1,1,0},    //11
						  {0,0,0}};
	
	bool T_shape[3][3] = {{0,1,0},    //010
						  {1,1,1},    //111
						  {0,0,0}};   //000
	
	bool Z_shape[3][3] = {{1,1,0},    //110
						  {0,1,1},    //011
						  {0,0,0}};   //000
						  
	
	return 0;
}
