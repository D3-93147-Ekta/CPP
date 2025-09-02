#include<iostream>
using namespace std;

class Time{
    private:
    int hrs;
    int mins;
    int secs;

    public:

    Time(void): hrs(0), mins(0), secs(0)
    {}
    Time(int hrs, int mins, int secs): hrs(hrs), mins(mins), secs(secs)
    {}

    void setHours(int hrs){
        this->hrs = hrs;
    }
    void setMins(int mins){
        this->mins = mins;
    }
    void setSecs(int secs){
        this->secs = secs;
    }

    int getHours(void){
        return this->hrs;
    }
    int getMins(void){
        return this->mins;
    }
     int getSecs(void){
        return this->secs;
    }

    void printTime(void){
        cout<<"Hours: "<<hrs<<endl;
        cout<<"Minutes: "<<mins<<endl;
        cout<<"Seconds: "<<secs<<endl;
    }
};

int menuList(){
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Add Time"<<endl;
    cout<<"2. Displat Time"<<endl;
    cout<<"3. Display only hours"<<endl;
    cout<<"Enter Choice";
    cin>>choice;
    return choice;
}

int main(){

    Time *ptr = new Time[2];

    int choice;
    while((choice = menuList())!=0){
        switch (choice)
        {
        case 1:
            for(int i=0; i<2; i++){
                int hours;
                int minutes;
                int seconds;
                cout<<"hour";
                cin>>hours;
                cout<<"minutes";
                cin>>minutes;
                cout<<"seconds";
                cin>>seconds;

                (ptr+i)->setHours(hours);
                (ptr+i)->setMins(minutes);
                (ptr+i)->setSecs(seconds);
            }
            break;
        
        case 2:
            for(int i=0; i<2; i++){
                (ptr+i)->printTime();
            }
            break;
        case 3:
            for(int i=0; i<2; i++){
                cout<<(ptr+i)->getHours()<<endl;
            }
        default:
            break;
        }
    }

    delete[] ptr;
}