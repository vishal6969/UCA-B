/*
 * helper function to calculate length of string
 *
 * @params
 *   str- string whose length to be calculate
 *
 * @return 
 *   length- length of string
 * */

int str_len(char *str){

	//variable to store length of string
	int length=0;

	//loop till the end of string and increment length 
	while(str[length]!='\0'){
	
	     length++;
	}

	return length;
}

