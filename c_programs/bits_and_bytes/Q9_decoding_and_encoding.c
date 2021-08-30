#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void base32_ascii(char* base32, char* ascii){
    
    int i = 0;
    int j = 0;
    
    while(base32[i] != '\0' && base32[i] != '='){
        
        long temp = 0;
        int c = 0;
        int d = 0;
        
        while(c < 8){
            
            long temp1;
            
            if(base32[i] >= 'A' && base32[i] <= 'Z')
            temp1 = base32[i++] - 'A';
            else if(base32[i] == '='){
            temp1 = 0;
            }
            else
            temp1 = (base32[i++] - '2') + 26;
            
            temp = temp << 5;
            temp = (temp | temp1);
            
            // printf("\nbase32: %lx %lx", temp1, temp);
            c++;
        }
        
        int count = ceil(((c*5.0)/8.0));
        // printf("\nCount1: %d", count);
        while(d < count){
            long temp1 = 0xff;
            temp1 = temp1 << 8*(count-1-d);
            
            temp1 = temp1 & temp;
            temp1 = temp1 >> (8*(count-1-d));
            // printf("\nascii: %lx",temp1);
            ascii[j++] = temp1;

            d++;
        }
    }
}

void ascii_base64(char* ascii, char* base64) {
    
    int i = 0;
    int j = 0;
    int arr[64];
    int x;
    
    for(x = 0; x < 26; x++){
        arr[x] = 'A' + x;
    }
    
    for(int y = 0; x < 52; x++, y++){
        arr[x] = 'a' + y;
    }
    
    for(int y = 0; x < 62; x++, y++){
        arr[x] = '0' + y;
    }
    
    while(ascii[i] != '\0'){
        
        long temp = 0;
        int c = 0;
        int d = 0;
        int sc = 0;
        
        while(c < 3){
            
            long temp1 = ascii[i++];
            
            if(temp1 != '\0'){
                sc++;
            }
            temp = temp << 8;
            temp = (temp | temp1);
            
            // printf("\nascii: %lx %lx", temp1, temp);
            c++;
        }
        
        int count = ceil(((sc*8.0)/6.0));
        // printf("\nCount2: %d", count);
        
        while(d < count){
            long temp1 = 0x3f;
            temp1 = temp1 << 6*(4-1-d);
            
            temp1 = temp1 & temp;
            temp1 = temp1 >> (6*(4-1-d));
            // printf("\nbase64: %lx",temp1);
            base64[j++] = arr[temp1];

            d++;
        }
        while(d < 4){
            base64[j++] = '=';
            d++;
        }
    }
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        
    char base32[201] = "";
    char ascii[125] = "";
    char base64[160] = "";
    
    scanf("%s", base32);
    
    base32_ascii(base32, ascii);
    ascii_base64(ascii, base64);
    
    // printf("\ndecoded: %s", ascii);
    printf("%s\n", base64);
    }
    return 0;
}
