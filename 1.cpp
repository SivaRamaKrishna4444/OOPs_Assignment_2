// Listt..

#include<iostream>
using namespace std;

class MyList{
    private:
        int arr[50];
        int size;
    public:
        MyList(){
            this->size = 0;  //initialising size as 0..
        }

        // To display the list
        void display(void){
            if(size>0){    //checking it there are any elements and ddisplaying
                cout<<"Current List: ";
                for(int i = 0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"List is Empty"<<endl;
            }
            
        }

        // TO add an element at end
        void add(int a){
            if(size>=50){
                cout<<"List is full..Can't add more elements "<<endl;
            }
            else{    //adding elements at end using size value.. and incrementing it to point it to next..
                arr[size] = a;
                size = size+1;
            }
        }

        // To insert an element at a specific index
        void insert(int pos,int a){
            if(pos<0 || pos > size){
                cout<<"Please Enter a valid Position"<<endl;
            }
            else if(size >= 50){
                cout<<"List is FUll"<<endl;
            }
            else{
                // right shifting the elements and inserting the value 'a' at 'pos'
                for(int i = size ;i>pos;i--){
                    arr[i] = arr[i-1];
                }
                arr[pos] = a;
                size = size + 1;   
            }
        }

        // To search an element if it is present 
        int search(int a){
            int found = -1;
            for(int i = 0 ;i<size;i++){
                if(arr[i] == a){
                    found = i;
                    break;
                }
            }
            if(found == -1){   // if element not found
                cout<<"Element not found"<<endl;
                return -1;
            }
            else{
                cout<<a<<" is found at index: "<<found<<endl;
                return found;
            }
        }

        // To remove an element from the list
        void remove(int a){
            int f = search(a);

            if(f == -1){
                cout<<"No Element found to remove"<<endl;
            }
            else{
                for(int i = f;i < size - 1; i++){ //left shitfingg.. and decreasing the size
                    arr[i]  = arr[i+1];
                }
                size = size - 1;
            }
        }

        int Size(void){
            return size;
        }
};

int main(){
    MyList l1;
    l1.add(10);
    l1.add(20);
    l1.add(30);
    l1.add(40);
    l1.add(50);

    cout<<"Current Size of List: "<<l1.Size()<<endl;
    l1.display();

    l1.insert(3,33);
    cout<<"Current Size of List: "<<l1.Size()<<endl;
    l1.display();

    l1.remove(50);
    cout<<"Current Size of List: "<<l1.Size()<<endl;
    l1.display();

    l1.search(50);

    cout<<"Current Size of List: "<<l1.Size()<<endl;

    return 0;
}