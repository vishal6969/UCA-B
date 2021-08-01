/* 
* The program implements bitwise ^ of two numbers
* without using & operator
*
* Example bitAnd(4, 5) = 1
* 
* Legal ops:  ~ |  
* Max ops: 14
*
* @author 1910990171 Vishal
* Date- 8/1/2021 (mm-dd-yyyy)
* Assignment- Bits and Bytes -Q2
*/

#include<stdio.h>

//helper function to calculate & of a,b 
int bitAnd (int a, int b) {
    
    //1's complement of a,b
    int complement_of_a = ~a; 
    int complement_of_b = ~b;
    
     //complement of or of complement_of_b,complement_of_a
     return ~(complement_of_a | complement_of_b);    
}

//function to calculate ^ of a,b
int bitXor(int a,int b){
     //1's complement of a,b
    int complement_of_a = ~a; 
    int complement_of_b = ~b;
    
    //or of a,b
    int or_a_b = a|b;
    
    //or of complement_of_a,complement_of_b
    int or_complement_a_b = complement_of_a|complement_of_b;
    
    return bitAnd(or_a_b,or_complement_a_b);    //and of or_a_b , or_complement_a_b using bitAnd function
}

//driver code
int main()
{
    //two numbers to perform ^ operation 
    int a=4;
    int b=5;
    
    //print output
    printf("%d",bitXor(a,b));
    
    return 0;
}
