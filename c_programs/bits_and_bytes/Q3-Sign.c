/*
 * The program implements sign function
 *   
 * Examples  :
 *   sign(130) = 1 , sign(-23) = -1
 * 
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops : 10
 *
 *
 *  @author 1910990171 Vishal
 *  Assignment- Bits and Bytes Q3
 * Date- 8/5/2021 mm/dd/yyyy
 */

#include<stdio.h>

/*
 * The sign function that returns 0 1 -1 for 
 * zero positive and negative numbers
 *
 * @params
 *  n- number for which sign is to be determined
 * */

int sign(int n){

	int temp1 = -1;
	int temp2 = 0x80000000;

	return !(temp1 & n) ? 0 : (temp2 & n) ? -1 : 1;
}


//driver code

int main(){

	int n;       //integer number

	//take input from user
	printf("Enter number: ");
	scanf("%d", &n);

	//call sign function and display result
	printf("\nSign: %d", sign(n));

}
