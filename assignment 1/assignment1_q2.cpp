#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;
    public:

    void initDate(){
        this->day = 0;
        this->month =0;
        this->year = 0;
    }

    void acceptDateFromConsole(){
        cout<<"Enter Day: ";
        cin>>day;
        cout<<"Enter Month: ";
        cin>>month;
        cout<<"Enter year: ";
        cin>>year;
    }

    void printDateOnConsole(){
        cout<<"Day: "<<day<<endl;
        cout<<"Month: "<<month<<endl;
        cout<<"Year: "<<year<<endl;
    }

    bool isLeapYear(){
        if(year%4 == 0  && year%400 == 0 ){
            cout<<"This year is a leap  year";
        }
        else{
            cout<<"This year is not a leap year";
        }
    }
};

int main(){
    Date d;
    d.initDate();
    d.acceptDateFromConsole();
    d.printDateOnConsole();
    d.isLeapYear();

    return 0;
}