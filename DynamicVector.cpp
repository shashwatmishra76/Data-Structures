#include <bits/stdc++.h>
using namespace std;

template <typename T> class DynamicVector{
    // Dynamic array to hold values of type T
    T *arr;
    // Capacity of the dynamic array
    int capacity;
    // No of elements currently in the array
    int size;
    
    public:
    // Constructor to initialize the custom vector class
    DynamicVector(){
        arr = new T[1];
        capacity = 1;
        size = 0;
    }
    
    // Method to insert element to the vector
    void insert(T element){
        if(size == capacity){
            capacity = capacity * 2;
            T *temp = new T[capacity];
            for(int i = 0; i < size; i++){
                temp[i] = arr[i];
            }
            delete []arr;
            arr = temp;
        }
        arr[size++] = element;
    }
    
    // Method to insert element at a given index
    void insert(T element, int index){
        if(index == capacity){
            insert(element);
        }else{
            if(index < size){
                arr[index] = element;
            }else{
                cout<<"The index you have entered is not valid, please input a valid index \n";
            }
        }
    }
    
    // Method to get element at a particular index
    T get(int index){
        if(index < size){
            return arr[index];
        }else{
            // Throw some error
            return NULL;
        }
    }
    
    // Method to pop element from end of the array
    T pop(){
        size -= 1;
        return arr[size];
    }
    
    // Method to print no of elements in the array
    int currentSize(){
        return size;
    }
    
    // Method to print the whole array
    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main() {
	cout<<"Testing my custom dynamic vector class \n";
	DynamicVector<int> v;
	v.insert(11);
	v.insert(2);
	v.insert(5);
	v.insert(100, 1);
	v.print();
	cout<<"Popping the last element " <<v.pop()<<"\n";
	cout<<"Vector after popping last element: \n";
	v.print();
	return 0;
}