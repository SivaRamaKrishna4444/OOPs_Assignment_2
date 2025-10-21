//  Friend Function..

#include<iostream>
using namespace std;

class Sports;  // declaration
 
class Student{
    private:
        string name;
        int roll;
        float marks;
    public:
        Student(string name,int roll,float marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
        friend void get_details(Student st1,Sports sp1); 
};

class Sports{
    private:
        string name;
        int cric_score;
        int volley_score;
    public:
        Sports(string name,int cric_score,int volley_score){
            this->name = name;
            this->cric_score = cric_score;
            this->volley_score = volley_score;
        }
        friend void get_details(Student st1,Sports sp1);
};

void get_details(Student st1,Sports sp1){   //access both classes private members..(friend)
    cout<<"Name: "<<st1.name<<endl;
    cout<<"Roll_No: "<<st1.roll<<endl;
    cout<<"Marks: "<<st1.marks<<endl;

    if(st1.name == sp1.name){
        cout<<"Cric_Score: "<<sp1.cric_score<<endl;
        cout<<"VOlley_Score: "<<sp1.volley_score<<endl;
    }
    else{
        cout<<"Names are not matching pls check for marks and scores are of same student..."<<endl;
    }
}


int main(){
    Student s1("Seshu",69,100);
    Sports sp1("Seshu",43,23);

    Student s2("Rana",12,12);
    Sports sp2("Rana",3,34);

    get_details(s2,sp2);
    get_details(s1,sp2);
    get_details(s1,sp1);

    return 0;
}