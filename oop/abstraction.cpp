#include <bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual void area() = 0;
        virtual void perimeter() = 0;
};


class Circle: public Shape{
    int radius;
    public:
        Circle(int r) : radius(r) {}
    void area(){
        cout<<"\t Area of Circle Pi*r*r = "<<3.14*radius*radius<<endl;
    }

    void perimeter(){
        cout<<"\t perimeter of Circle 2*pi*r = "<<2*radius*3.14<<endl;
    }
};

class Cube: public Shape{
    int side;
    public:
        Cube(int s){
            side = s;
        }
    void area(){
        cout<<"\t Area of Cube 6*a^a = "<<6 * side * side<<endl;
    }

    void perimeter(){
        cout<<"\t perimeter of a Cube 12*s = "<<12*side<<endl;
    }
};


int main() {
    // abstract class
    // cannot create obje   ct of abstract class
    // can only be used as base class
    // must be inherited and its pure virtual functions must be overridden
    // if not overridden, derived class also becomes abstract class

    Shape *s;

    cout<<"+++++++++_____Desiplaying the circle____+++++++++++"<<endl;
    Circle circle= Circle(5); // Provide radius
    s = &circle;
    s->area();
    s->perimeter();
    
    cout<<"+++++++++_____Desiplaying the Cube____+++++++++++"<<endl;
    Cube cube(3); // Provide side length
    s = &cube;
    s->area();
    s->perimeter();
    return 0;
}