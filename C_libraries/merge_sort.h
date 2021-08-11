/*
 * The program performs merge sort on an array 
 *
 * 
 *
 *
 * @author 1910990171 Vishal
 * Date- 8/11/2021 mm/dd/yyyy
 * */

#include<stdio.h>


/*
 * The function takes two sorted arrays and
 * merges them into one array
 *
 *
 * @params
 * arr- array to be sorted
 * arr1- extra space to be used
 * l- starting index of array
 * r- ending index of array 
 * */

void merge(int* arr, int* arr1,int l, int r){

	//calculate mid of array
	int m = (r + l) / 2;


	//iterators to traverse the array
	int i = l;
	int j = m + 1;
	int k = l;


	//traverse both sorted arrays simultaneously
	while(i <= m && j <= r){
	
	    if(arr[i] < arr[j]){
	     
	        arr1[k++] = arr[i++];    //add element from array 1 to result
	    }
	    else{
	    
		count++;            //increment count of inversions
		arr1[k++] = arr[j++];
	    }
	}

	//add elements left in array1
	while(i <= m){
	
            arr1[k++] = arr[i++];
	}
	
	//add elements left in array2
	while(j <= r){
	
            arr1[k++] = arr[j++];
	}
        

	//transfer all elements to original array
	for(int x = l; x <= r; x++){
	
	    arr[x] = arr1[x];
	}
}




/*
 * helper function to divide array into two arrays
 * and call merge function to merge them
 *
 *
 * @params
 *    arr- array to diverged
 *    arr1- to be used as extra space
 *    l- starting index of array
 *    r- ending index of array
 * */

void merge_sort(int *arr, int *arr1, int l, int r){


	if(l < r){
	
	//calculate mid
            int m = (l + r) / 2;
        
      	//further divided the two arrays
	    merge_sort(arr, arr1, l, m);
	    merge_sort(arr, arr1, m + 1, r); 
            merge(arr, arr1, l, r);
	}
	else{
	
            return;
	}
}
