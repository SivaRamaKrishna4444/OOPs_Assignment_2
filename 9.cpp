// BankAccount

#include<iostream>
using namespace std;

class BankAccount{
    private:   //private data
        string name;
        int ac_no;
        float balance;
    public:
        BankAccount(string name,int ac_no,float balance){
            this->name = name;
            this->ac_no = ac_no;
            this->balance = balance;
        }

        void deposit(float dep){
            if(dep<=0){
                cout<<"Please enter a valid amount to deposit..."<<endl;
                cout<<"Avl Bal: "<<this->balance<<endl;
            }
            else{
                this->balance = this->balance + dep;
                cout<<"Rs."<<dep<<" hase been deposited successfullyy..."<<endl;
                cout<<"Updated Balance: "<<this->balance<<endl;
            }
        }

        void withdraw(float with){
            if(with<0 || balance < with){
                cout<<"Please enter a valid amount to withdraw"<<endl;
            }
            else{
                this->balance = this->balance - with;
                cout<<"Rs."<<with<<" has been withdrawn successfullyy"<<endl;
                cout<<"Updated Balance: "<<this->balance<<endl;
            }  
        }

        void display(void){
            cout<<"Name: "<<this->name<<endl;
            cout<<"Account Number: "<<this->ac_no<<endl;
            cout<<"Balance: "<<this->balance<<endl;
        }

};

int main(){

    BankAccount b1("Siva",1,1000);
    b1.display();
    b1.deposit(100);
    b1.withdraw(10000);
    b1.withdraw(200);
    b1.display();

    return 0;
}