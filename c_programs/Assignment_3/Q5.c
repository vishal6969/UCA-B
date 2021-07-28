/*
 * The program takes input of two square matrices
 * and outputs their multiplication matrix
 *
 * Sample Test Case:
 *
 *  Input:
 *  Size = 2
 *  Matrix1 = [[1,2],[3,4]]
 *  Matrix2 = [[1,1],[1,1]]
 *  Output:
 *  Matrix = [[3, 3],[7, 7]]
 *
 *  @author 1910990171 Vishal
 *  Assignment- 3.5
 *  Date- 7/28/2021
 * */


#include<stdio.h>

int main(){

	//initialise default size of matrix
	int size=0;

	//take input of size of matrices
	printf("Enter size of input_matrix: ");
	scanf("%d",&size);

	//decalre matrices along with their size
	int input_matrix1[size][size];
	int input_matrix2[size][size];
	int output_matrix[size][size];

	//take input of elements of matrix 1
	printf("Enter input_matrix1 elements\n");

	for(int i=0;i<size;i++){
	   
            for(int j=0;j<size;j++){
	        
		scanf("%d",&input_matrix1[i][j]);
	    }
	}

	//take input of elements of matrix 2
	printf("Enter input_matrix2 elements\n");
	

	for(int i=0;i<size;i++){
	   
            for(int j=0;j<size;j++){
	        
		scanf("%d",&input_matrix2[i][j]);
	    }
	}

        //loop every cell of output matrix
	for(int i=0;i<size;i++){
	
            for(int j=0;j<size;j++){
	     
		//initialise default value of output matrix
		//elements to avoid garbage values
		output_matrix[i][j]=0;

	        for(int k=0;k<size;k++){
	            
		    //perform multiplication opetration
	            output_matrix[i][j] += input_matrix1[i][k]*
			                   input_matrix2[k][j];		
		}	
	    }
	}
        

	//print the resultant matrix from multiplication of
	//matrix1 and matrix2
	printf("Resultant Matrix:\n");
	
	for(int i=0;i<size;i++){
	   
            for(int j=0;j<size;j++){
	        
		printf("%d ",output_matrix[i][j]);
	    }

	    printf("\n");    //new line
	}

	return 0;
}
