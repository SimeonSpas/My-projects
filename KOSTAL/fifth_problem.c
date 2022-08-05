#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20

int arr[MAX_SIZE];
int top = 0, bottom = 0;

int isEmpty();
int isFull();
void push(int);
void pop();
void printQueue(int*);

int main(){

    for(int i = 0; i < MAX_SIZE; i++){ //pushing elements from 0 to 19
        push(i);
    }
    for(int i = 0; i < 5; i++){ // popping the first 5 elements
        pop();
    }

    printQueue(arr); //printing the queue

    return 0;
}

int isEmpty(){
    if(bottom == top || bottom == 0 && top == 0){
        fprintf(stderr, "The queue is empty!\n");
        exit(-1);
    }
}

int isFull(){
    if(top == MAX_SIZE){
        fprintf(stderr, "The queue is full!\n");
        exit(-1);
    }
}

void push(int newValue){
    isFull();
    arr[top] = newValue;
    top++;
}

void pop(){
    isEmpty();
    int result = arr[bottom];
    for(int i = 0; i < MAX_SIZE; i++){
        arr[i] = arr[i+1];
    }
    bottom++;
}

void printQueue(int* arr){
    for(int i = 0; i < MAX_SIZE; i++){
        printf("%d ", arr[i]);
    }
}