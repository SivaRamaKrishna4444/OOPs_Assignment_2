// Abstract Class and Pure Virtual Function

#include<iostream>
using namespace std;

class Shape{  // abstract class
    public:
        virtual void area() = 0;  // pure virtual function
};

class Circle : public Shape{
    private:
        float radius;
    public:
        Circle(float radius){
            this->radius = radius;
        }

        void area(){
            cout<<"Area of Circle: "<<(3.14*radius*radius)<<endl;
        }
};

class Square : public Shape{
    private:
        float side;
    public:
        Square(float side){
            this->side = side;
        }

        void area(){
            cout<<"Area of Square: "<<side*side<<endl;
        }
};

int main(){

    Square s(10);
    Circle c(3);

    // s.area();
    // c.area();

    Shape* sptr;  //pointer for class (Shape)

    sptr = &s;   //poinitng to sqaure
    sptr->area();   //from class (Sqaure)

    sptr = &c;      //pointing to circle
    sptr->area();   //from class (Circle)

    return 0;
}