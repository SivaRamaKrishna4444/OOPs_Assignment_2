// Sorting algos

#include<iostream>
using namespace std;

class MySort{
    private:
        int arr[50];
        int size;
    public:
        MySort(){
            cout<<"Enter the size of Array: ";
            cin>>size;

            for(int i = 0 ; i < size ; i++){
                cout<<"Enter Element "<<i+1<<" : ";
                cin>>arr[i];
            }
        }

        void display(int arr[]){
            for(int i = 0;i<size;i++){
                cout<<arr[i]<<"  ";
            }
            
            cout<<endl;
        }

        // Bubble Sorttt
        void Bubble_Sort(void){
            cout<<endl<<"Original Array: ";
            display(arr);

            // Copying the original array into tempArr
            // not changing the original array // works on copied array
            int tempArr[50];
            for(int i = 0 ; i < size ; i++){
                tempArr[i] = arr[i];
            } 

            for(int i = 0 ; i < size - 1 ; i++){
                for(int j = 0 ; j < size-i-1 ; j++){
                    if(tempArr[j] > tempArr[j+1]){
                        int temp = tempArr[j];
                        tempArr[j] = tempArr[j+1];
                        tempArr[j+1] = temp;
                    }
                }
            }

            cout<<"After Bubble Sort: ";
            display(tempArr);
        }

        // Selection Sorttt
        void Selection_Sort(void){
            cout<<endl<<"Original Array: ";
            display(arr);

            // Copying the original array into tempArr for not changing the orginal array
            // works on the copied array
            int tempArr[50];
            for(int i = 0 ; i < size ; i++){
                tempArr[i] = arr[i];
            } 

            for(int i = 0 ; i < size - 1 ; i++){
                int min_idx = i;
                for(int j = i+1 ; j < size ; j++){
                    if(tempArr[j]<tempArr[min_idx]){
                        min_idx = j;
                    }
                }
                int temp = tempArr[i];
                tempArr[i] = tempArr[min_idx];
                tempArr[min_idx] = temp;
            }
            cout<<"After Selection Sort: ";
            display(tempArr);
        }
};

int main(){
    MySort m1;
    m1.Bubble_Sort();
    
    m1.Selection_Sort();
    return 0;
}