/* 
* The program implements bitwise & of two numbers
* without using & operator
*
* Example bitAnd(6, 5) = 4
* 
* Legal ops:  ~ |  
* Max ops: 8
*
* @author 1910990171 Vishal
* Date- 8/1/2021 (mm-dd-yyyy)
* Assignment- Bits and Bytes -Q1
*/

#include<stdio.h>

//function to calculate & of a and b 
int bitAnd (int a, int b) {
    
    //1's complement of a,b
    int complement_of_a = ~a; 
    int complement_of_b = ~b;
    
     //complement of or of complement_of_b,complement_of_a
     return ~(complement_of_a | complement_of_b);    
}

//driver code
int main()
{
    //two numbers to perform & operation 
    int a=5;
    int b=5;
    
    //print output
    printf("%d",bitAnd(a,b));
    
    return 0;
}

