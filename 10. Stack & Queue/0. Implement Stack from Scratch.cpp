#include<iostream>
#include<climits>

using namespace std;

class StackUsingArray{

    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        if(nextIndex==0){
            return true;
        }
        return false;
    }

    void push(int element){

        if(nextIndex == capacity){
            cout << "Stack is full";
            return;
        }
        data[nextIndex]=element;
        cout << element << " is pushed."<< endl;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is empty;";
            return INT_MIN;
        }

    nextIndex--;
    return data[nextIndex];

    }

    int top(){
        if(isEmpty()){
            cout << "stack is empty";
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }

    void print(){
        if(isEmpty()){
            cout << "stack is empty";
        }
        cout << "Stack Element are : ";
        for(int i=0;i<size();i++){
            cout << data[i] << " ";
        }
    }
};

int main() {
	StackUsingArray s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);


	cout << "Stack top : "<<s.top() << endl;

	cout << "pop element : "<< s.pop() << endl;
	cout << "pop element : "<<  s.pop() << endl;



	cout << "Stack Size : "<<s.size() << endl;

	s.print();

	cout << s.isEmpty() << endl;

}
