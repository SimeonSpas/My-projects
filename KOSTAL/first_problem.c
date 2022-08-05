#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define CHECKBIT(mask, bit) !!(mask&(1<<bit)) //define CHECKBIT for easier work later

unsigned char CheckBit(unsigned int uValue);

int main(){

    uint16_t mask;

    scanf("%hd", &mask); //enter the number of which we check bits
    CheckBit(mask); //function for checking bits

    return EXIT_SUCCESS;
}

unsigned char CheckBit(unsigned int uValue){
    uint16_t count = 0; //counter for high bits
    uint16_t bit = -1; 

    while(bit != 16){ //we use 16 bit number, so we need it check till the 16th bit
        bit++;
        if(CHECKBIT(uValue, bit) == 1){ //checking for HIGH bits and incrementing our counter
            count++;
        }
    }
    
    if (count == 1){ //if there is only 1 high bit we return 1;
        printf("%d\n", count); 
    }else{          //else we return 0;
        printf("0\n");
    }

}