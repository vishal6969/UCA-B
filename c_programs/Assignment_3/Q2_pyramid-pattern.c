/*
 * The program prints a pyramid pattern with given height.
 * See the below sample test case for reference.
 *
 * Input: 5
 * Output:     #
 *            # #
 *           # # #
 *          # # # #
 *         # # # # #  
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.2
 * Date- 7/28/2021
 * */

#include<stdio.h>

int main(){
        
	//initialise height of pyramid with a default value
	int n=0;
        //take input of height of pyramid from user
	printf("Enter height of pyramid: ");
	scanf("%d", &n);

        //loop from first step to last step
	for(int i=1;i<=n;i++){
	    
            //print reuired space before the # 
	    for(int j=n-i;j>0;j--){
	        
		printf(" ");
	    }
            
	    //print #
            for(int j=0;j<i;j++){
	       
	        printf("# ");
	    }
            
	    //next line 
            printf("\n\n");	    
	}

	return 0;
}
