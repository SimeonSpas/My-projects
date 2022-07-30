#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COUNT 2
int check = 0;

typedef struct person_info{
    int age;
    int birth;
    int day;
    int result;
    char name[100];
}person_info;

void filling_information();
void matching_people(person_info*, int);
char* name(char*);
void print(person_info*);
void info_about_stars(person_info*);
int randint(int, int);

int main(){
    filling_information();
    return EXIT_SUCCESS;
}


void filling_information(){
    person_info arr[COUNT];
    printf("Enter information about yourself \n");
    for(int i = 0; i < COUNT; i++){
        name(arr[i].name);//your name
        printf("Enter your age: ");
        scanf("%d", &arr[i].age);//your age
        info_about_stars(&arr[i]); //your zodiac sign
    }
    print(arr);
}

char* name(char* arr){
    printf("Enter you name: ");
    scanf("\n"); //so the next scanf doesnt stop
    scanf("%[^\n]s", arr); // enter until the program dont see new line
}


void print(person_info* arr){
    srand(time(NULL));
    for(int i = 0; i < COUNT; i++){ //enter info about 2 people
        printf("Years: %d ",arr[i].age);
        printf("Name: %s \n", arr[i].name);
        //printf(" arr[1]%d\n", arr[0].birth);
    }

    // check about the signs
    if(arr[0].birth == 1 && arr[1].birth == 5 || arr[1].birth == 10 || arr[1].birth == 11){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 2 && arr[1].birth == 10 || arr[1].birth == 12 || arr[1].birth == 3 || arr[1].birth == 4){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 3 && arr[1].birth == 5 || arr[1].birth == 7 || arr[1].birth == 9 || arr[1].birth == 11 
    || arr[1].birth == 3){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 4 && arr[1].birth == 12 || arr[1].birth == 6 || arr[1].birth == 10){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 5 && arr[1].birth == 5 || arr[1].birth == 7 || arr[1].birth == 9 || arr[1].birth == 1 
    || arr[1].birth == 3){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 6 && arr[1].birth == 4 || arr[1].birth == 6 || arr[1].birth == 7
     || arr[1].birth == 8 || arr[1].birth == 10 || arr[1].birth == 12 ){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 7 && arr[1].birth == 5 || arr[1].birth == 9 || arr[1].birth == 3){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 8 && arr[1].birth == 6 || arr[1].birth == 7 || arr[1].birth == 9 || arr[1].birth == 10){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 9 && arr[1].birth == 5 || arr[1].birth == 9 || arr[1].birth == 3){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 10 && arr[1].birth == 4 || arr[1].birth == 6 || arr[1].birth == 12 || arr[1].birth == 1){
        arr->result = randint(65, 85);
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 11 && arr[1].birth == 5 || arr[1].birth == 8 || arr[1].birth == 9 || arr[1].birth == 11){
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = randint(65, 85);
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }else if(arr[0].birth == 12 && arr[1].birth == 5 || arr[1].birth == 6 || arr[1].birth == 10 || arr[1].birth == 8){
        if((abs(arr[0].age - arr[1].age)) % 2 == 0){
            arr->result = randint(65, 85);
            arr->result = arr->result + randint(8,15);
        }else{
            arr->result = randint(30, 65);
            arr->result = arr->result + randint(0,7);
        }
        printf("Your result is: %d%% \n", arr->result);
    }
}

void info_about_stars(person_info* arr){
    printf("Enter the month of birth: ");
    scanf("%d", &arr->birth);
    switch(arr->birth){
        case 1: //KOZIROG
            printf("Enter your day of birth: ");
            scanf("%d", &arr->day);
            if(arr->day > 19 && arr->birth == 1){
                arr->birth = 2;
                printf(" Vodolei ");
            }else if (arr->day <= 19 && arr->birth == 1 || arr->day >= 22 && arr->birth == 1){
                arr->birth = 1;
                printf(" kozirog ");
            }
            break;
        case 2: //VODOLEI
            printf("Enter the day of birth: ");
            scanf("%d", &arr->day);
            if(arr->day > 18 && arr->birth == 2){
                arr->birth = 3;
                printf(" ribi ");
        }else if(arr->day <= 18  && arr->birth == 2 || arr->day >= 20 && arr->birth == 1){
                arr->birth = 2;
                printf(" vodolei ");
            }
            break;
        case 3: //RIBI
            printf("Enter the day of birth");
            scanf("%d", &arr->day);
            if(arr->day > 20 && arr->birth == 3){
                arr->birth = 4;
                printf(" oven ");
        }else if(arr->day >= 19 && arr->birth == 2 || arr->day <= 20 && arr->birth == 3){
                arr->birth = 3;
                printf(" ribi ");
            }
            break;
        case 4: //OVEN
            printf("Enter the day of birth: ");
            scanf("%d", &arr->day);
            if(arr->day > 20 && arr->birth == 4){
                arr->day = 5;
                printf(" telec ");
        }else if(arr->day >= 21 && arr->birth == 3 || arr->day <= 19 && arr->birth== 4){
                arr->day = 4;
                printf(" oven ");
            }
            break;
        case 5: //TELEC
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 21 && arr->birth == 5){
            arr->birth = 6;
            printf(" bliznaci ");
        }else if(arr->day >= 20 && arr->birth == 4 || arr->day <= 20 && arr->birth == 5){
                arr->birth = 5;
                printf(" telec ");
            }
        break;
        case 6: //BLIZNACI
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 21 && arr->birth == 6){
            arr->birth = 7;
            printf(" rak ");
        }else if(arr->day >= 22 && arr->birth == 5 || arr->day <= 21 && arr->birth == 6){
                arr->birth = 6;
                printf(" bliznaci ");
            }
        break;
        case 7: //RAK
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 22 && arr->birth == 7){
            arr->birth = 8;
            printf(" luv ");
        }else if(arr->day >= 22 && arr->birth == 6 || arr->day <= 22 && arr->birth == 7){
                arr->birth = 7;
                printf(" rak ");
            }
        break;
        case 8: //LUV
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 22 && arr->birth == 8){
            arr->birth = 9;
            printf(" deva ");
        }else if(arr->day >= 23 && arr->birth == 7 || arr->day <= 22 && arr->birth == 8){
                arr->birth = 8;
                printf(" luv ");
            }
        break;
        case 9: //DEVA
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 22 && arr->birth == 9){
            arr->birth = 10;
            printf(" vezni ");
        }else if(arr->day >= 23 && arr->birth == 8 || arr->day <= 22 && arr->birth == 9){
                arr->birth = 9;
                printf(" deva ");
            }
        break;
        case 10: //VEZNI
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 23 && arr->birth == 10){
            arr->birth = 11;
            printf(" skorpion ");
        }else if(arr->day >= 23 && arr->birth == 9 || arr->day <= 23 && arr->birth== 10){
                arr->birth = 10;
                printf(" vezni ");
            }
        break;
        case 11: //SKORPION
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 22 && arr->birth == 11){
            arr->birth = 12;
            printf(" strelec ");
        }else if(arr->day >= 24 && arr->birth == 10 || arr->day <= 22 && arr->birth == 11){
                arr->birth = 11;
                printf(" skorpion ");
            }
        break;
        case 12: //STRELEC
        printf("Enter the day of birth: ");
        scanf("%d", &arr->day);
        if(arr->day > 21 && arr->birth == 12){
            arr->birth = 1;
            printf(" kozirog ");
        }else if(arr->day >= 23 && arr->birth == 11 || arr->day <= 21 && arr->day == 12){
                arr->birth = 12;
                printf(" strelec ");
            }
        break;
    }
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}