/*
 * The program checks whether string1 is present at end of string2
 *
 * Sample Test Case:
 *   
 *   Input: s1= "abkdcdddkd"  s2= "kd"
 *   Output: 1
 *
 *   Input: s1= "abcd"   s2= "kd"
 *   Output: -1
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.13
 * Date- 8/3/2021 mm/dd/yyyy 
 * */

#include<stdio.h>
#include "str_len.h"   //custom function to get length of string


/*
 * the function returns 0 or 1 on basis of whether str2
 * is present at end of str1 
 *
 * @params
 *    str1- string to be searched in
 *    str2- string to search for    
 * */

int strend(char *str1, char *str2){


	int present = 1;         //variable to store locaion of str2
        int str2_length = str_len(str2); //length of str2
	int str1_length = str_len(str1);
	
	//loop from end of str1 and str2
	for(int i=0; i< str2_length; i++){
	  

    	   //check if characters from end of str1 match with that of str2
	   if(str1[str1_length-1-i] == str2[str2_length-1-i]){

	          continue;          //keep checking next characters	   
	   } 
	   else{
		   present = 0;
		   break;
	   }
	}
	
	
	return present;      //return the location
}


//driver code

int main(){

	char str1[] = "abcdbc";
	char str2[] = "bc";


	//print 0 or 1 on basis of whether str1 is present at end of str2
	printf("%d",strend(str1,str2));


	return 0;
}
