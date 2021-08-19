/*
 * The program finds Mth smallest number from an array of 
 * n numbers
 *
 * Example: 
 *   Input: {5, 4, 3, 1, 2}  M = 2
 *   Output: 2
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 8.2
 * Date- 8/19/2021 mm/dd/yyyy
 * */


#include<stdio.h>


//driver code

int main(){

	//array of integers
	int arr[] = {5, 4, 1, 3, 2};
	int n = 5;           //length of array

	int m = 2;

	//display error when m is greater than array length
	if(m > n){
	
            printf("\nInvalid Input");
	}

	//traverse through array
	for(int i = 1; i < n; i++){
	
	    int index = 0;
	    int temp = arr[i];

	    while(index < i && index < m && arr[i] > arr[index]){
		
		index++;
	    }

	    for(int j = (i < m-1 ? i : m-1); j > index; j--){
	    
		arr[j] = arr[j - 1];
	    }

	    arr[index] = temp;
	}	



	//display Mth smallest number
	printf("\n%dth Smallest Number: %d", m, arr[m-1]);

}
