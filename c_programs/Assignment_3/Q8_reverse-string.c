/*
* The program implements reverse function that takes 
* a string and convert it to its reverse
* 
* Sample Test Case:
*    
*    Input: "hello world"
*    Output: "dlrow olleh"
*
* 
* @author 1910990171 Vishal
* Assignment- 3.8
* Date- 7/30/2021
**/

#include <stdio.h>
#include "str_len.h"          //custom function to return length of string



/*
* This function reverses the given string
*
* @params
* str- string that needs to be reversed
*/
void reverse(char* str){
    
    //get length of string using str_len function
    int length = str_len(str);
    
    //traverse the string from start and end to the mid of string
    for(int i=0;i<length/2;i++){
        
        //swap character from start of string 
        //with corresponding character at end of string
        char c = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = c;
    }
}

//driver code
int main(){
    
    //declare a stack string of sufficient size
    char str[500];
    
    //take input of string to be reversed
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    
    reverse(str);           //call the reverse function
    
    printf("%s",str);           //print the output
    
    return 0;
}
