/*The program calculates time taken by bubble sort for
 * different data sets.
 *
 * @author: 1910990171 Vishal
 * Assignment - 2
 * Date - 7/27/2021
 *
 *
 * */


//important header files
#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>


/*This function peforms the bubble sort
 *
 * @params 
 * arr (integer array to be sorted)
 * n (size of the array)
 *
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
            }
         }
     } 
}
int main(){
     
     //declare needful variables	
     struct timeval tv;           
     long start,end;
     int n;

     //take input of size of array
     printf("\nEnter number of elements: ");
     scanf("%d",&n);

     int arr[n];          

     //assign array in descending fashion
     for(int i=0;i<n;i++){
         arr[n-i-1]=i;
     
     }

     //calculate time difference before and after calling bubble_sort function
     gettimeofday(&tv,NULL);
     start=tv.tv_sec*1000;
     bubble_sort(arr,n);
     gettimeofday(&tv,NULL);
     end=tv.tv_sec*1000;

     printf("\nReverse Array: %ld\n",end-start);

     //assign array in ascending fashion
     for(int i=0;i<n;i++){
         arr[i]=i;
     }

     //calculate time difference before and after calling bubble_sort function
     gettimeofday(&tv,NULL);
     start=tv.tv_sec*1000;
     bubble_sort(arr,n);
     gettimeofday(&tv,NULL);
     end=tv.tv_sec*1000;


     printf("\nSorted Array: %ld\n",end-start);

     //assign array in random fashion
      for(int i=0;i<n;i++){
         arr[i]=rand()%n;
     }

     //calculate time difference before and after calling bubble_sort function
     gettimeofday(&tv,NULL);
     start=tv.tv_sec*1000;
     bubble_sort(arr,n);
     gettimeofday(&tv,NULL);
     end=tv.tv_sec*1000;


     printf("\nRandom Array: %ld\n",end-start);

     return 0;
}
