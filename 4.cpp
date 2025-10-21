// Multilevel Inheritance

#include<iostream>
using namespace std;

class Person{   //Basee
    private:
        string Name;
        int age;
    public:
        Person(string Name,int age){
            this->Name = Name;
            this->age = age;
        }

        void get_person(void){
            cout<<"From Class Person: "<<endl;
            cout<<"Name: "<<this->Name<<endl;
            cout<<"Age: "<<this->age<<endl;
        }
        
};

class Employee: public Person{  //inherting Person(Base)
    private:
        int id;
        float salary;

    public:
        Employee(string Name,int age,int id,float salary) : Person(Name,age){ //name,age from Person
            this->id = id;
            this->salary = salary;
        }

        void get_Employee(void){
            get_person();
            cout<<"From Class Employee: "<<endl;
            cout<<"ID: "<<this->id<<endl;
            cout<<"Salary: "<<this->salary<<endl;
        }
};

class Manager : public Employee{  // inheriting Employee which inherits Person
    private:
        string man_name;
    public:
        Manager(string Name,int age,int id,float salary,string man_name) : Employee(Name,age,id,salary){
            // name,age,id,salary from  employee..
            this->man_name = man_name;
        }

        void get_manager(void){
            get_Employee();
            cout<<"From Class Manager: "<<endl;
            cout<<"Manager Name: "<<this->man_name<<endl;
        }
};

int main(){
    
    Manager m1("Siva",18,1,99999,"Rama");
    m1.get_manager();

    return 0;
}