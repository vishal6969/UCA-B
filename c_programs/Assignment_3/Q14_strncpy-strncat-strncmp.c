/*
 * The program implements standard string functions
 * 
 *    strcpy, strcat, strcmp
 *
 * in a different way to perform all the same things with only first 
 * n characters of the string
 *
 *
 * Example:
 *    strncpy(char *s, char *t, size_t n) copies first n charcaters
 *                                       of string to the string t
 * 
 *
 * @author 1910990171 Vishal
 * Assignment- 3.14
 * Date- 8/6/2021 mm/dd/yyyy   
 * */


#include<stdio.h>
#include"str_len.h"   //custom function to calculate length of string



/*
 * the function copies n characters from string s to string t
 * 
 *
 * @params
 *    s- string to be copied from
 *    t- strint to be copied to
 *    n- number of characters to be copied
 * */

void custom_strncpy(char *s, char *t, size_t n){

	//get length of string s
	int length = str_len(s);

	//return error if s has less than n characters
	if(length < n){
	
	    printf("\nError: String has lesser characters than %ld",n);

	    return;      //terminate function call
	}


	//copy n characters from s to t
	for(int i=0; i < n; i++){

	    char c = s[i];	
	    t[i] = c;      //copy each character one by one using third variable
	}


	//end the string t
	t[n] = '\0';
}




/*
 * The function concatenates n characters from
 * s2 to the end of s1
 *
 * @params
 *   s1- string that needs to be concatenated with
 *   s2- string that needs to be concatenated to s1
 *   n- number of characters to concatenate
 * */

void custom_strncat(char *s1, char *s2, size_t n){

	int length1 = str_len(s1);     //length of string s1
	int length2 = str_len(s2);     //length of string s2

	//print error if there not sufficient
	// characters in s2 to concatenate to s1
	if(length2 < n){
	
	     printf("\nError: String has lesser characters than %ld", n);

	     return;        //terminate function call
	}



	//loop from 0 till n
	for(int i=0; i < n; i++){
	
	     char c = s2[i];
             s1[length1] = c;    //assign character from s2 to
	                         // end of s1 using third variable
	     
	     ++length1;             //increment length of s1
	}

}




/*
 * The program returns 0 positive negative for
 * s1 == s2  s1 > s2   s1 < s2   for first n characters
 *
 *
 * @params
 *    s1- string 1
 *    s2- string 2
 *    n- number of characters to be compared
 * */

int custom_strncmp(char *s1, char *s2, size_t n){

	//directly loop through s1 and s2 for first n characters
	for(int i=0; i < n;i++){
	
	     //check if they are unequal
	     if(s1[i] != s2[i]){
	     
		 return s1[i] - s2[i];  //return the character difference
	     }
	}


	return 0;      //if no character mismatched then 
	               //the first n characters in both strings are equal
}



//driver code
int main(){

	char s[50] = "Hello World";       //string with characters
	char t[50];                   //empty string
	size_t n = 8;                  //number of characters to copy
	
	
	//call the strcpy function
	custom_strncpy(s, t, n);

	//display copied string
	printf("\nCopied- %s", t);

	//call the strncat function
	custom_strncat(s, t, n);

        //display concatenated string
	printf("\nConcatenated- %s", s);	

	//call and display strncmp for s and t
	printf("\nComparison- %d", custom_strncmp(s, t, 12));
}
