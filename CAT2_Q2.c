/*program to display 2D array
Author: Thuku Moses
Date 6/11/2024
*/
//preprocessor directive-scanf(),printf()
#include<stdio.h>
int main(){
	int scores[2][4]={{65,92,35,70},{84,72,59,67}};
	int i,j;
	//loop to print elements in the array 
	for (i=0;i<2;i++){
		for (j=0;j<4;j++){
			printf("Element at index [%d] [%d] is:%d\n",i,j,scores[i][j]);
		}
	}
	return 0;
}