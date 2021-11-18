#include<iostream>
#include<stack>
using namespace std;

bool isValid(string S){
    int len = S.size();

    stack<char>st;
    bool ans = true;

    for(int i=0; i<len; i++){
        if(S[i]=='(' || S[i]=='{' || S[i]=='['){
            st.push(S[i]);
        }else if(S[i]==')' || S[i]=='}' || S[i]==']'){
            if(st.top()=='(' ){
                st.pop();
            }else if(st.top()=='{'){
                st.pop();
            }else if(st.top()=='['){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string S = "(({[[[]]]}))";
    if(isValid(S)){
        cout << "Valid string."<<endl;
    }else
        cout << "Not valid." << endl;
}
