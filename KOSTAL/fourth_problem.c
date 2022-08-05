#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int count = 0;

void Conv(int, char*);

int main(){
    char str[MAX_SIZE];
    scanf("%[^\n]d", str);
    Conv(MAX_SIZE, str);
    return 0;
}

void Conv(int sValue, char* pBuffer){
    if(sValue > 0){
        pBuffer[count] = ' ';
    }
    while(pBuffer[count] != '\0'){
        printf("%c", pBuffer[count]);
        count++;
    }
}