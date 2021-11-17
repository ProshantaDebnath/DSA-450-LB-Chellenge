#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    int start = 0;
    int end = s.size()-1;

    while(start < end){
        if(s[start]!=s[end]){
            cout << "Not Palindrome";
            return 0;
        };
        start ++;
        end --;
    };
    cout << "Palindrome";

    return 0;

}
