// Dictionaryy..

#include<iostream>
using namespace std;

class MyDict{
    private:
        string keys[50];
        string values[50];
        int size;
    public:
        MyDict(){
            size = 0;  //initialising dict size to 0
        }

        void add(string key,string value){
            if(size<50){      //checking if the dict is full or not and assigning key,value and increasing size;
                keys[size] = key;
                values[size] = value;
                size = size + 1;
            }
            else{   //if dict is full
                cout<<"Dictionary is FULL..Cannot add more entries.."<<endl;
            }
        }

        void search(string key){   
            int k = -1;
            for(int i = 0 ; i < size ; i++){
                if(keys[i] == key){   //checks every key and if it matches it breaks theree..
                    k = i;
                    break;
                }
            }
            if(k == -1){
                cout<<"Key not found..."<<endl;
            }
            else{
                cout<<endl<<"Key Found :: "<<endl;
                cout<<keys[k] <<" : "<<values[k]<<endl;
            }
        }

        void remove(string key){
            int k = -1;
            for(int i = 0 ; i < size ; i++){   // seraches for key..
                if(keys[i] == key){
                    k = i;
                    break;
                }
            }
            if(k == -1){
                cout<<"Key not found cannot remove.."<<endl;
            }
            else{
                for(int j = k ; j < size - 1 ; j++){   //left shifting.. and decreasing sizee..
                    keys[j] = keys[j+1];
                    values[j] = values[j+1];
                }
                size = size - 1;
                cout<<"Removed.. "<<key<<endl;
            }
        }

        void show_dict(void){
            //displays the dictionaryy
            cout<<endl;
            if(size == 0){
                cout<<"Dictionary is Empty...Nothing to show"<<endl;
            }
            else{
                cout<<"Dictionary entries: "<<endl;
                for(int i = 0;i<size;i++){
                    cout<< keys[i] <<" : "<<values[i]<<endl;
                }
            }
        }

        void size_of_dict(void){
            cout<<endl<<"Size of Dict: "<<this->size<<endl;
        }

};

int main(){ 
    MyDict d;

    d.add("Siva","CDS");
    d.add("Rama","CDS");
    d.add("Kamma","CDS");
    d.add("Krishna","CDS");

    d.size_of_dict();

    d.search("Krishna");
    d.show_dict();

    d.remove("SIva");
    d.remove("Kamma");

    d.show_dict();

    return 0;
}