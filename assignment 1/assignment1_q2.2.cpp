#include<stdio.h>
#include<stdlib.h>

struct Date{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptr){
    ptr->day = 0;
    ptr->month = 0;
    ptr->year = 0;
}

void acceptDateFromConsole(struct Date *ptr){
    printf("Day: ");
    scanf("%d", &ptr->day);
    printf("Month: ");
    scanf("%d", &ptr->month);
    printf("Year: ");
    scanf("%d ", &ptr->year);
}

void printDateONConsole(struct Date *ptr){
    printf("Date: %d\n ", ptr->day);
    printf("Month: %d\n", ptr->month);
    printf("Year: %d\n", ptr->year);
}

bool isLeapYear(struct Date *ptr){
    if(ptr->year%4 == 0 && ptr->year%400 == 0){
        printf("It is a leap Year");
    }
    else{
        printf("It is not a leap year");
    }
}

int main(){
    struct Date d;
    initDate(&d);
    acceptDateFromConsole(&d);
    //initDate(&d);
    printDateONConsole(&d);
    isLeapYear(&d);

    return 0;
}