#include <stdio.h>
#define MAX_SIZE 100 //Define the size of the string

int main(){
    char str[MAX_SIZE];
    scanf("%[^\n]s", str); //Enter string until new line is seen
    int count = 0;
    while(str[count]){
        count++;    //Getting the size of the string without library function such as strlen
        
    }
    for(int i = count; i >= 0; i--){
        printf("%c", str[i]);   // Printing the string reversed
    }
    return 0;
}