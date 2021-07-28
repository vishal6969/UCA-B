/*
 * The program performs swapping of two numbers
 * without any use of third variable
 *
 * @author 1910990171 Vishal
 * Assignment- 3.1
 * Date- 7/08/2021
 *
 * */
#include<stdio.h>

int main(){
    
      //initialise a and b with default values
      int a=0;
      int b=0;
      //take input of a and b from user
      printf("a: ");
      scanf("%d", &a);

      printf("b: ");
      scanf("%d", &b);

      //perform swapping operation
      a=a+b;
      b=a-b;
      a=a-b;
       
      //output result
      printf("a: %d   b: %d\n",a,b);

      return 0;
}
