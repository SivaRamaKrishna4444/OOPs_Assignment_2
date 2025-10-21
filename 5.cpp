// Multiple Inheritance

#include<iostream>
using namespace std;

class Person{  //Base 1
    private:
        string name;
        int age;
    public:
        Person(string name,int age){
            this->name = name;
            this->age = age;
        }

        void show(void){
            cout<<"Fromm Person Class: "<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Age: "<<this->age<<endl;
        }
};

class Athlete{  //Base 2
    private:
        string sport;

    public:
        Athlete(string sport){
            this->sport = sport;
        }
        void show(void){
            cout<<"From Athlete Class: "<<endl;
            cout<<"Sport: "<<this->sport<<endl;
        }
};

class SportsPerson : public Person , public Athlete{  //derived -- inherits both Person,Athlete
    private:
        string Country;
    public:
        SportsPerson(string name,int age,string sport,string Country) : Person(name,age),Athlete(sport){
            this->Country = Country;
        }
        
        void get_SportsPerson(void){
            Person :: show();  // from class person
            Athlete :: show();  // from class athlete
            cout<<"Country: "<<this->Country<<endl;
        }
};


int main(){

    SportsPerson s1("Haridk",32,"Cricket","India");
    s1.get_SportsPerson();

    return 0;
}