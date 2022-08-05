#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10


void Bubble(int* pArray, unsigned int uLen);


int main(){
    srand(time(NULL));  //srand so the numbers can be random everytime the program runs
    int arr[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        arr[i] = rand() % 20;       //generating random numbers from 0 to 20
    }

    Bubble(arr, MAX_SIZE); //sorting the array
    for(int i = 0; i < MAX_SIZE; i++){  
        printf("%d ", arr[i]);      //printing the array
    }
    return 0;
}

void Bubble(int* pArray, unsigned int uLen){
    for(int i = 0; i < uLen; i++){
        for(int j = 0; j < uLen - i - 1; j++){
            if(pArray[j] > pArray[j+1]){    //checking if the current value is greater than next value
                int temp = pArray[j];       //if true store the value in variable temp
                pArray[j] = pArray[j+1];    //swapping the current value with the next value
                pArray[j+1] = temp;         //setting the next num with the value of the current (j) num
            }
        }
    }
}