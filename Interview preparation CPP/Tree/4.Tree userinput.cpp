#include <iostream>
#include <vector>
using namespace std;

template <typename T>

class Node{
    public:
    T data;
    vector<Node<T>*>children;
    Node(T data){
        this->data = data;
    }
};

Node<int>* UserInput(){
    int rootData;
    cout << "Enter Data: ";
    cin >> rootData;
    Node<int>* root = new Node<int>(rootData);
    int n;
    cout <<"Enter the number of " << rootData << " children" <<endl;
    cin >> n;
    for(int i=0; i<n; i++){
        Node<int>* child = UserInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(Node<int>* root){
    if(root == NULL){
        return;
    }
    cout << root->data << ":";
    for(int i=0; i<root->children.size(); i++){
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}

int main() {
    // Node<int>* root = new Node<int>(1);
    // Node<int>* node1 = new Node<int>(2);
    // Node<int>* node2 = new Node<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    Node<int>* root = UserInput();
    printTree(root);
}

// //           1
// //         / |  \
// //       2   3   4
//         / \  |   |
//        5   6 7   9
// // output:
// 1:2,3,4,
// 2:5,6,
// 5:
// 6:
// 3:7,
// 7:
// 4:8,
// 8:
// 9:
