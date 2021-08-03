
/*
 * helper function to implement power function
 *
 * @params
 *   base-  integer whose power is to be calculated
 *   power-  exponential power of integer to be calculated
 *
 * @return
 *   result-  base multiplied power times
 * */

int custom_pow(int base, int power){

	//variable to store the final result
	int result = 1;


	for(int i=0; i<power; i++){
	
	     	result *= base;    //multiply base power times
	}


	return result;         
}	
