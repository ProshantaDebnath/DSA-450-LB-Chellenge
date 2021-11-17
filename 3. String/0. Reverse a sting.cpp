#include<iostream>
#include<algorithm>
using namespace std;


int main(){


    string s;
    cout << "Before string: " ;
    getline(cin, s);
    int i=0;
    int j=s.size()-1;

    while(i<j){

        int temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }

    cout << "After string : ";
    cout << s << " ";
}
