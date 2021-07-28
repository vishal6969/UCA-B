/*
 * The program counts number of vowels and consonents in 
 * the given string
 *
 * Sample Test Case:
 *
 *   Input: str = "C Course"
 *   Output: Vowels= 3, Consonants=5
 *
 * 
 * @author 1910990171 Vishal
 * Assignment- 3.3
 * Date- 7/28/2021 
 * */

#include<stdio.h>

int main(){

	//variables to be used
	char str[500];
	int vowel=0;
	int consonent=0;

         //scan input string
	scanf("%[^\n]s",str);

	//loop through each character of string
	for(int i=0;str[i]!='\0';i++){
	   
	     char c = str[i];

	     //check if any character is vowel and increment vowel count
	     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'
	       ||c=='E'||c=='I'||c=='O'||c=='U'){
	         
		  vowel++;
	     }

	     //if character was not vowel increment consonent count
	     else{
	         
		  consonent++;
	     }
	}

	//print count of vowels and consonents
	printf("Vowels: %d   Consonents: %d",vowel,consonent);

        return 0;
}
