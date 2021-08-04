/*
 * The program implements selection sort using recursion
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 5.1
 * Date- 8/4/2021 mm/dd/yyyy
 * */
#include<stdio.h>
#include"print_array.h"     //custom function to print array elements


/*
 * This function searches the array for smallest element 
 * to be inserted at specified index in the array
 *
 * @params
 * arr- array to be searched
 * index- current index in array
 * selected_index- index of position for which element is to be searched
 * end- last index of array
 * */

void find_element(int arr[], int index, int selected_index, int end){

	//if current index exceeds array size
	if(index >= end){

            return;
	}

      //swap current element if it is smaller than selected element
	if(arr[index] < arr[selected_index]){
	
	  //swap using third variable
	    int temp = arr[index];
	    arr[index] = arr[selected_index];
	    arr[selected_index] = temp;
	}


	//call function to check other elements if they
	// are smaller than current element
	find_element(arr, index+1, selected_index, end);
}



/*
 * This function performs selection sort with recursion
 *
 * @params
 * arr- array be sorted
 * index- current selected index of array
 * end- last index of array
 * */

void selection_sort(int arr[], int index, int end){

	//if current index of array exceeds array size
	if(index >= end){
	  
	    return;
	}
    
	//call helper function to find best suited element for this index
	find_element(arr, index+1, index, end);

	//call selection_sort again for next elements in array
	selection_sort(arr, index+1, end);
}






//driver code
int main(){

	int arr[] = {0, 5, 4, 3, 2, 1};   //array to be sorted
	int n = 6;          //size of array

	//display array elements before sort
	printf("Before sort: ");
	print_array(arr, n);

	selection_sort(arr, 0, n);     //call the recursive selection_sort function

	//print array elements after sort
	printf("\nAfter sort: ");
	print_array(arr, n);
}
