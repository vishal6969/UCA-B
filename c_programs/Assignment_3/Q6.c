/*
 * The program states whether a given string is
 * palindrome or not.
 *
 * Sample Test Case:
 *
 *  Input: str- "Never Odd or Even"
 *  Output: true
 * 
 * NOTE- Cases are ignored.
 *
 * @author 1910990171 Vishal
 * Assignment- 3.6
 * Date- 7/29/2021 
 * */

#include<stdio.h>

int main(){
        
	//array of characters to store the string
	char str[500];

	//take input from user
	printf("\nEnter String: ");
	scanf("%[^\n]s",str);
        
	int str_len=0;            //variable to count length of string 

	//loop through every character of string
	for(int i=0;str[i]!='\0';i++){
	
	     //check if character is upper case letter
	     if(str[i]>=65&&str[i]<=90){
	     
		 str[i]=str[i]+32;        //convert uppercase to lowercase
	     }

	     //calculate string length 
	         str_len++;
	}

	//initialise varibles with first and last index of string
	int j=0,k=str_len-1;

	//loop string from both sides
	while(j<=k){
	
	   //skip the spaces
	    if(str[j]==32){
		
		j++;
	        continue; 	
	    }
            
	    if(str[k]==32){
		
		k--;
	        continue;	
	    }

	    //if characters are not same at start and end of 
	    //string output false and finish program
            if(str[j++]!=str[k--]){
	    
		 
		 printf("\nfalse");
	         
		 return 0;	 
	    }		    
	}

	//if there was no such case of inequalit of characters
	//then it is a palindrome string
	printf("\ntrue");


	return 0;
}
