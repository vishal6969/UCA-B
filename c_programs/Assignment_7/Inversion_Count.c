/*
 * The program calculates Inversion count of an array
 * which means how far is the array from being sorted
 *
 * Example:
 *  Input: arr[] = {8, 4, 2, 1}
 *  Output: 6
 * 
 * Explanation: Given array has six inversions:
 * (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).
 *
 *
 *
 *
 * @author: 1910990171 Vishal
 * Assignment - 7.1
 * Date - 8/11/2021 mm/dd/yyyy
 * */


#include<stdio.h>

int count = 0;        //global variable to store inversion count

/*
 * This function peforms the bubble sort
 * and counts number of swaps
 *
 * @params 
 * arr (integer array to be sorted)
 * n (size of the array)
 * */

void bubble_sort(int arr[],int n){
      
     for(int i=0;i<n;i++){

         for(int j=0;j<n-1;j++){

            if(arr[j]>arr[j+1]){

	       //if element at index j is greater than element at j+1
	       //then swap both
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;

	       count++;             //increment count for every swap
            }
         }
     } 
}
int main(){
     
     //array to perform sort and take inversion count
     int arr[6] = {6, 5, 4, 3, 2, 1};

     //call bubble sort function
     bubble_sort(arr, 6);

     
     //display Inversion Count
     printf("\nInversion Count: %d", count);
     

     return 0;
}
