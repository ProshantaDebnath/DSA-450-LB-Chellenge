#include <iostream>
using namespace std;

template<typename T>

class QueueUsingArray{

    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s){
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        capacity = s;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    //insert element
    void enqueue( T element){

        if(size == capacity){
            cout << "Queue is full" << endl;
            return;
        }
        data[nextIndex] = element;
        cout << "|"<<element << "|"<<" is pushed." << endl;
        nextIndex = ((nextIndex +1) % capacity);
        if(firstIndex == -1 ){
            firstIndex = 0;
        }
        size ++;
    }


    // front element
    T front(){
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }


    // delete element
    T dequeue(){
       if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return 0;
        }

        T ans = data[firstIndex];
        firstIndex = ((firstIndex + 1) % capacity);
        size --;
        if(size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};

int main() {
	QueueUsingArray<string> q(5);

	q.enqueue("A");
	q.enqueue("B");
	q.enqueue("C");
	q.enqueue("D");
	q.enqueue("E");
	//q.enqueue("F");



	cout << "****************************"<< endl;
	cout << q.dequeue() << " is dequeue"<< endl;
	cout << q.dequeue() << " is dequeue"<< endl;
	cout << q.dequeue() << " is dequeue"<< endl;


	cout << "****************************"<< endl;
    cout << "front element is : "<<q.front() << endl;
	cout << "Size of the Queue is : "<<q.getSize() << endl;
	cout << "Is Queue is empty or not : "<<q.isEmpty() << endl;
}

