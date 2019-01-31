/*Bach NGuyen
ET 226
02/22/16
2D Array Assignment*/

#include <stdio.h>
#include <stdlib.h>
void print2Darray44(int array[][4]);
void arrayToZero44(int array[][4]);
void randomNum44(int array[][4]);
void arrayToindex44(int array[][4]);
void sum44(int array[][4]);
void sumRow44(int array[][4]);
void print2Darray23(int array[2][3]);
void arrayToZero23(int array[2][3]);
void randomNum23(int array[2][3]);
void arrayToindex23(int array[2][3]);
void sum23(int array[2][3]);
void sumRow23(int array[2][3]);
int main(int argc, char *argv[]) {
	int array1[2][3];
	int array2[4][4];
	// 4*4 arrays answers
	printf("4x4 array answers\n");
	arrayToZero44(array2);//set array to zero
	print2Darray44(array2);//printout zero array
	randomNum44(array2);//set value of the array to a random number in this case the number is from 0-10
	print2Darray44(array2);//printout random number in the array
	sum44(array2);//add all of the element in the array together
	sumRow44(array2);//add each of the array's row and put it in a 1D array
	// 2x3 array, the same steps are repeated for the 2x3 array
	printf("2x3 array answers\n");
	arrayToZero23(array1);
	print2Darray23(array1);
	randomNum23(array1);
	print2Darray23(array1);
	sum23(array1);
	sumRow23(array1);
	return 0;
}
void print2Darray44(int array[][4]){
	int row=0;
	int col=0;
	int i=0, j=0;
	printf("\n");
	for(row=0;row<4;row++){
		for (col=0;col<4;col++){
			i = row+1;
			j = col+1;
			printf("2D Array [%d][%d] = %d\n",i,j,array[row][col]);
		}
		printf("\n");
	}
}
void arrayToZero44(int array[][4]){
	int row=0;
	int col=0;
	for(row=0;row<4;row++){
		for (col=0;col<4;col++){
			array[row][col]=0;
		}
	}
}
void randomNum44(int array[][4]){
	int row=0;
	int col=0;
	for(row=0;row<4;row++){
		for(col=0;col<4;col++){
			array[row][col]=rand() % 10;
		}
	}
}
void sum44(int array[][4]){
	int row=0;
	int col=0;
	int sum=0;
	for(row=0;row<4;row++){
		for(col=0;col<4;col++){
			sum+=array[row][col];
	}
	}
	printf("The sum of the array = %d\n",sum);
}
void sumRow44(int array[][4]){
	int row=4,col=4,sum=0,i=0,j=0,k[row];
	for(i=0;i<row;++i){
		for(j=0;j<col;++j){
			sum = sum + array[i][j];
		}
		k[i]=sum;
		printf("Array k[%d] value is %d\n",i,k[i]);	
		sum=0;
	}
	
	
}
void print2Darray23(int array[2][3]){
	int row=0;
	int col=0;
	int i=0, j=0;
	printf("\n");
	for(row=0;row<2;row++){
		for (col=0;col<3;col++){
			i = row+1;
			j = col+1;
			printf("2D Array [%d][%d] = %d\n",i,j,array[row][col]);
		}
		printf("\n");
	}
}
void arrayToZero23(int array[2][3]){
	int row=0;
	int col=0;
	for(row=0;row<2;row++){
		for (col=0;col<3;col++){
			array[row][col]=0;
		}
	}
}
void randomNum23(int array[2][3]){
	int row=0;
	int col=0;
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			array[row][col]=rand() % 10;
		}
	}
}
void sum23(int array[2][3]){
	int row=0;
	int col=0;
	int sum=0;
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			sum+=array[row][col];
	}
	}
	printf("The sum of the array = %d\n",sum);
}
void sumRow23(int array[2][3]){
	int row=2,col=3,sum=0,i=0,j=0,k[row];
	for(i=0;i<row;++i){
		for(j=0;j<col;++j){
			sum = sum + array[i][j];
		}
		k[i]=sum;
		printf("Array k[%d] value is %d\n",i,k[i]);	
		sum=0;
	}	
}
