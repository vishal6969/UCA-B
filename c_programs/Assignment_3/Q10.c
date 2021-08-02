/*
 * The program implements squeezing on a string.
 *
 * Sample Test Case:
 *   
 *   Input: s1= "abcd"  s2= "bc"
 *   Output: "ad"
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.10
 * Date- 8/3/2021 mm/dd/yyyy 
 * */

#include<stdio.h>

/*
 * the function performs squeeze operation
 *
 * @params
 *    str1- string to be squeezed
 *    str2- string to be compared with to perform squeeze    
 * */

void squeeze(char *str1, char *str2){

	//dictionary of all the letters in str2
	int dictionary[26];

	//loop through all letters in str2
	for(int i=0; str2[i] != '\0'; i++){
	
            dictionary[str2[i] - 'a'] = 1;  //update the dictionary  	
	}


	int index = 0; 


	//loop through all letters in str1
	for(int i=0; str1[i] != '\0'; i++){
	  
           //skip the letters that are in the str2		
	    if(dictionary[str1[i] - 'a'] == 1){
	    
	         continue;
	    }

	    //assign letters to str1 that are not in str2
            str1[index++] = str1[i];    	    
	}
	
	str1[index] = '\0';      //end the string
}


//driver code

int main(){

	char str1[] = "abcd";
	char str2[] = "bc";

	//call squeeze function
	squeeze(str1, str2);
	
	//print string after squeezing
	printf("String- %s",str1);


	return 0;
}
