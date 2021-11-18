#include<iostream>
#include<stack>
using namespace std;

int main(){

    string S;
    cout << "Enter string: ";
    getline(cin, S);
    stack<char> st;
    int len = S.size();
    for(int i=0; i<len; i++){
        st.push(S[i]);
    }
    char *arr = new char[len];
    int i=0;
    while(!st.empty()){
        arr[i++] = st.top();
        st.pop();
    }

    arr[i] = '\0';

    cout << "Reverse string : "<<arr;

}
