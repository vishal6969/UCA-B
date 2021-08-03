/*
 * The function prints an array
 *
 * @params
 *   array- array that needs to be printed
 *   n- index till that array needs to be printed 
 * */

void print_array(int array[], int n){

	printf("\n");  //new line


	//loop from 0 to n
	for(int i=0; i<n; i++){
	
	    printf("%d ", array[i]);        //print every element of array
	}
}
