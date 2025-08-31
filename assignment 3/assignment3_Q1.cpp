#include<iostream>
using namespace std;

static const double PI = 3.14;

class Cylinder{
    private:
    double radius;
    double height;

    public:

    Cylinder(void): radius(0), height(0)
    {}
    Cylinder(double radius, double height): radius(radius), height(height)
    {}

    void setRadius(double radius){
        this->radius = radius;
    }
    double getRadius(){
        return this->radius;
    }

    void setHeight(double height){
        this->height = height;
    }
    double getHeight(){
        return this->height;
    }

    double calculateVolume(){
        return PI*radius*radius*height;
    }
};

int main(){
    Cylinder c;
    c.setRadius(5);
    c.setHeight(10);
    cout<<"Volume of Cylinder is: "<<c.calculateVolume();
}