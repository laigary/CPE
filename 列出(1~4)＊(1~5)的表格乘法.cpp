#include<stdio.h>
#include<stdlib.h>
#define ROWS   4
#define COLS   5
int main (void){
	int i,j,*ptr;
	int tables[ROWS][COLS];
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++){
			tables[i][j]=(i+1)*(j+1);
		}
	}
	ptr = &tables[0][0];
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++){
			printf("%d*%d=%2d ",(i+1),(j+1),*(ptr+(i*COLS)+j));
		}
		printf("\n");
	}
	
} 
