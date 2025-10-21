// Single Inheritance

#include<iostream>
using namespace std;

class Shape{
    public:
        float breadth;
        float length;

        Shape(float length,float breadth){
            this->length = length;
            this->breadth = breadth;
        }

        void get_shape(void){
            cout<<"Length: "<<this->length<<endl;
            cout<<"Breadth: "<<this->breadth<<endl;
        }

};

class Rectangle : public Shape{
    public:
         Rectangle(float length, float breadth) : Shape(length, breadth) {
            //nothing to initialise //length,breadth from Shape;
        }

        void area(void){
            cout<<"Area of Rectangle: "<<length*breadth<<endl;
        }
        void perimeter(void){
            cout<<"Perimeter of Rectangle: "<<2*(length+breadth)<<endl;
        }
};


int main(){

    Rectangle r1(2,3);

    r1.get_shape(); // from class Shape(Base)

    r1.area();  //from derived class (Rectangle)
    r1.perimeter();

    return 0;
}