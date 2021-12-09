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
    Node<int>* root = new Node<int>(1);
    Node<int>* node1 = new Node<int>(2);
    Node<int>* node2 = new Node<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root);
}

//         1
//       /  \
//       2    3

// output:
// 1:2,3,
// 2:
// 3:



#include <iostream>
#include <vector>
using namespace std;

//template<typename T>
class Node{
  public:
    int data;
    vector<Node*> children;
    Node(int x){
        this->data = x;
    }
};

void printNode(Node* root){
    cout << root->data << " ";
    for (int i = 0; i < root->children.size() ; i++) {
        printNode(root->children[i]);
    }
}

int main() {
    
    Node* root = new Node(1);
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printNode(root);

    return 0;
}