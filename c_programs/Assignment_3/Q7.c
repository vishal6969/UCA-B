/*
 * The program reads all lines of a file and prints
 * only the lines that are longer than 80 characters;
 *
 *  Input: A text file with lines of varying length
 *  Output: print all lines with length greater than 80
 *  
 *  NOTE- The program prints an error message if there
 *        is no existing fill with the given name 
 *
 *  @author 1910990171 Vishal
 *  Assignment- 3.7
 *  Date- 7/30/2021
 * */

#include<stdio.h>

/*
 * The function returns length of a string
 *
 * @params str[]- an array of characters 
 * */
int str_len(char str[]){

	int length;           //variable to store length of string

	for(length = 0; str[length] != '\n'; ){
		
	     length++;        //increment length of string
	}

	return length;        
}
int main(){
   
	char file[50];

	//input file name from user
	printf("Enter file name: ");
	scanf("%[^\n]s",file);

	//open file in read mode
	FILE *f = fopen(file,"r");

	//check if the file exists
	if(f==NULL){
	
	   //print error if file does not exist
	   printf("Error!! File does not Exist");
           return 0;	   
	}
	
	//string to store lines from file
	char str[500];

	//loop till the end of file
	while(fgets(str,500,(FILE*)f) != NULL){
		
	    if(str_len(str) > 80){
	    
               //print lines that are longer than 80 characters
	       printf("\n%s",str);
	    }
	}
	    return 0;
}
