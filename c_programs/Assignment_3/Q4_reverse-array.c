/*
 * The program implements a rerverse array function
 * that takes an array and reverses it.
 *
 * Sample Test Case:
 *
 *  Input: array = [1,2,3,4,5]
 *  Output: [5,4,3,2,1]
 *
 * @author 1910990171 Vishal
 * Assignment- 3.4
 * Date- 7/28/2021
 * */

#include<stdio.h>

// function to reverse the array elements
//
// @params 
// arr- Input Array that needs to be reversed
// size- size of the input array
void reverse_array(int arr[],int size){

	for(int i=0;i<size/2;i++){
	   
	   //swap an element from start of array with
	   //its corresponding element at the end of array	
	   int temp = arr[i];
	   arr[i] = arr[size-i-1];
	   arr[size-i-1] = temp;
	}
}

// function to print the array elements
//
// @params
// arr- Input Array that needs to be printed
// size- size of the input array
void print_array(int arr[], int size){
    
	for(int i=0;i<size;i++){
	   
            printf("%d ",arr[i]);
	}
}

int main(){

	//sample input array
	int arr[] = {1,2,3,4,5};
	
	//print array before calling reverse function
	printf("\nArray before calling reverse function: ");
	print_array(arr,5);

	reverse_array(arr,5);         //calling reverse function

	//print array after calling reverse function
        printf("\nArray after calling reverse function: ");
	print_array(arr,5);

	return 0;
}
