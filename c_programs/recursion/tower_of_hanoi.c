/*
 * The program implements famous tower of hanoi problem using recursion
 * and prints the steps to peform the shifting of rings
 *
 * Example:
 *    function call:  tower_of_hanoi(3, 'A', 'C', 'B')
 *
 *    Expected Output:    A to C
 *                        A to B
 *                        C to B
 *                        A to C
 *                        B to A
 *                        B to C
 *                        A to C
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 5.3
 * Date- 8/5/2021 mm/dd/yyyy       
 * */

#include<stdio.h>


/*
 * This function performs the recursive calls and displays steps
 * to be followed in order to shift rings from tower A to C
 *
 * @params
 *    n- number of rings
 *    from- tower where rings are present initially
 *    to- the destination tower
 *    aux- auxilliary tower to be used as help in shifting
 * */

void tower_of_hanoi(int n, char from, char to, char aux){

	//trivial case where we have to shift only one ring
	if(n == 1){
	
            printf("\n%c to %c",from, to);    //display shifting process

	    return;
	}

	//function call for n-1 rings to be shifted to aux using from
	tower_of_hanoi(n-1, from, aux, to);
	
	printf("\n%c to %c",from, to);   //display shifting of last ring present

	//shift the n-1 rings from aux to the actual destination
	tower_of_hanoi(n-1, aux, to, from);

}


//driver code

int main(){

	//number of rings
	int n = 4;

	//call the recursive tower_of_hanoi function
	// to display solving steps
	tower_of_hanoi(n, 'A', 'C', 'B'); 
}
