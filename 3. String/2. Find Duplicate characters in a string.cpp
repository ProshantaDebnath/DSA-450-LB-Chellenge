#include <bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    unordered_map<char, int> count;

    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }

    for (auto it : count) {   //iterating through the unordered map
        if (it.second > 1)   //if the count of characters is greater then 1 then duplicate found
            cout << it.first << ", count = " << it.second
                 << "\n";
    }


    //////////////////////////printing another method;

    for (auto it=count.begin(); it!=count.end(); it++ ) {   //iterating through the unordered map
        if (it->second > 1)   //if the count of characters is greater then 1 then duplicate found
            cout << it->first << ", count = " << it->second
                 << "\n";
    }

}
