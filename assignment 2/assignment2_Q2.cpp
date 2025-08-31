#include<iostream>
using namespace std;

class Tollbooth{
    private:
    int totalCars;
    double totalMoney;
    int payingCars;
    int nonPayingCars;

    public:
    Tollbooth(void): totalCars(0), totalMoney(0), payingCars(0), nonPayingCars(0)
    {}

    void payingCar(){
        ++totalCars;
        ++payingCars;
        totalMoney += 0.50;
    }

    void nonPayingCar(){
        ++totalCars;
        ++nonPayingCars;
    }

    void printOnConsole(){
        cout<<"Total no of Cars: "<<totalCars<<endl;
        cout<<"Total amout of Money: "<<totalMoney<<endl;
        cout<<"Number of Paying Cars: "<< payingCars<<endl;
        cout<<"Number of Non paying Cars: "<< nonPayingCars<<endl;
    }
};

int main(){

    Tollbooth t;
    t.payingCar();
    t.payingCar();
    t.nonPayingCar();
    t.payingCar();

    t.printOnConsole();
}