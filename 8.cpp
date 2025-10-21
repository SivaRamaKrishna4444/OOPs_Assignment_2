// OverRide,OverLoad and Polymorphismmm

#include<iostream>
using namespace std;

class base{
    public:
        virtual void fun1(){   //for run-time polymorphism
            cout<<"Fun1 from class Base"<<endl;
        }
};

class derived : public base{
    public:

        void fun1(){  //this method over-rides base class method i.e., fun1
             cout<<"Fun1 from class derived"<<endl;
        }


        void fun1(int a){ //overloading
            cout<<"From Derived:  Value of a is "<<a<<endl;
        }
};

int main(){

    base* bptr;
    base b;
    bptr = &b;
    
    derived* dptr;
    derived d;
    dptr = &d;

    //Direct Call (Compile Time)
    b.fun1();
    d.fun1();
    d.fun1(5);  //overloading


    // Pointer Call (Run-Time using virtual keyword)
    bptr->fun1();  //From Base Class Method
    bptr = dptr;
    bptr->fun1();  //From Derived Class Method

    return 0;
}