/*
 * The program implements bang(!) operator
 *
 * Legal ops: ~ & ^ | + << >>
 *
 * Max ops: 12
 *
 * Example:
 *   bang(3) = 0
 *   bang(0) = 1
 *
 * */

#include<stdio.h>

int bang (int x) {
    
    return x >> 31 | ((( ~x + 1) >> 31) + 1);
}

int main() {

    printf("\n%d|%d|%d\n", bang(3), bang(1), bang(0));
}
