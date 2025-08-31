#include<stdio.h>
#include<stdlib.h>

struct Date{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate){
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year =0;
}

void acceptDateFromConsole(struct Date *ptrDate){
    printf("Day: ");
    scanf("%d\n", &ptrDate->day);
    printf("Month: ");
    scanf("%d\n", &ptrDate->month);
    printf("Year: ");
    scanf("%d\n", &ptrDate->year);
}

void printDateFromConsole(struct Date *ptrDate){
    printf("Day: %d\n", ptrDate->day);
    printf("Month: %d\n", ptrDate->month);
    printf("Year: %d\n", ptrDate->year);
}

int menuList(){
    int choice;
    printf("0. exit\n");
    printf("1. printDateFromConsole\n");
    printf("2. acceptDateFromConsole\n");
    printf("Enter Choice : ");
    scanf("%d", &choice);
    return choice;
}

int main(){
    int choice;
    struct Date d;

    while((choice=menuList())!=0){
        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&d);
            break;
        case 2:
            printDateFromConsole(&d);
            break;
        default:
            printf("Not a case");
            break;
        }
    }

    return 0;
}