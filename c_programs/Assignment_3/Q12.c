/*
 * The program returns rightmost location of string2 in string1
 *
 * Sample Test Case:
 *   
 *   Input: s1= "abkdcdddkd"  s2= "kd"
 *   Output: 8
 *
 *   Input: s1= "abcd"   s2= "kd"
 *   Output: -1
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.12
 * Date- 8/3/2021 mm/dd/yyyy 
 * */

#include<stdio.h>
#include "str_len.h"   //custom function to get length of string
/*
 * the function returns rightmost location of str2 in string1 
 *
 * @params
 *    str1- string to be searched in
 *    str2- string to search for    
 * */

int strrindex(char *str1, char *str2){


	int index = -1;         //variable to store locaion of str2
        int str2_length = str_len(str2); //length of str2

	
	//loop through all characters in str1
	for(int i=0; str1[i] != '\0'; i++){
	  
	     int j = 0;   //to iterate str2

           //check if whole str2 is present in str1
	   while(str2[j] != '\0' && str2[j] == str1[i]){
	   
	        //increment iterators for str1 and str2 	   
		 j++;
		 i++;
	   }
           
    	   //store the index of str2 if its found in str1
	   if(j == str2_length){

	          index = i-j;     //store location of str2 	   
	   } 
	}
	
	
	return index;      //return the location
}


//driver code

int main(){

	char str1[] = "abcdbc";
	char str2[] = "bc";


	//print rightmost location of str1 in str2
	printf("Rightmost Location- %d",strrindex(str1,str2));


	return 0;
}
