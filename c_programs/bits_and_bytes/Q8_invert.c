/* 
* Return x with the n bits that begin at position p inverted (i.e. turn 0
* into 1 and vice versa)
*  and the rest left unchanged. Consider the indices of x to begin with the
*  lower -order bit numbered as zero
* 
* Legal ops: ~ & ^ | << >>
*/

#include <stdio.h>

int invert(int x, int p, int n){
    
    int temp = -1 << n;
    temp = ~temp;
    temp = temp << p;
    
    return temp^x;
}

int main()
{
    int x = 0xff0f;
    printf("%x %x", x, invert(x, 4, 8));

    return 0;
}

