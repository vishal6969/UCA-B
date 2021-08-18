/* 
* The program implements bitwise ^ of two numbers
* without using & operator
*
* Example bitAnd(4, 5) = 1
* 
* Legal ops:  ~ & 
* Max ops: 14
*
* @author 1910990171 Vishal
* Date- 8/1/2021 (mm-dd-yyyy)
* Assignment- Bits and Bytes -Q2
*/

#include<stdio.h>


//function to calculate ^ of a,b
int bitXor(int a,int b){
     //negation of a,b
    int na = ~a; 
    int nb = ~b;
    
    //and of a,b
    int and_a_b = a&b;

    //and of negation of a and b
    int and_na_nb = na & nb;
    
    
    return ~and_a_b & ~and_na_nb;
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
