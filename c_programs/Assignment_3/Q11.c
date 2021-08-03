/*
 * The program returns first location of character from string1
 * present in string2
 *
 * Sample Test Case:
 *   
 *   Input: s1= "abcd"  s2= "kd"
 *   Output: 3
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.11
 * Date- 8/3/2021 mm/dd/yyyy 
 * */

#include<stdio.h>

/*
 * the function returns first location of character present in string2 
 *
 * @params
 *    str1- string to be searched in
 *    str2- string to search characters of    
 * */

int any(char *str1, char *str2){

	//dictionary of all the letters in str2
	int dictionary[26];

	//loop through all letters in str2
	for(int i=0; str2[i] != '\0'; i++){
	
            dictionary[str2[i] - 'a'] = 1;  //update the dictionary  	
	}

	
	int index = -1;         //variable to store locaion of character


	//loop through all letters in str1
	for(int i=0; str1[i] != '\0'; i++){
	  
           //check if the character is present in str2		
	    if(dictionary[str1[i] - 'a'] == 1){
	    
	         index = i;      //store first location of character
		 break;
	    }
    	    
	}
	
	
	return index;      //return the location
}


//driver code

int main(){

	char str1[] = "abcd";
	char str2[] = "bc";


	//print first location of char of str1 present in str2
	printf("First Location- %d",any(str1,str2));


	return 0;
}
