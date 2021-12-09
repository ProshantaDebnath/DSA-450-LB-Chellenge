#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int array[] = {1,1,2,5,3};
    int n = sizeof(array)/sizeof(int);
    vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

    for (int i = 0; i < n; i++)
    {
        substitute[array[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (substitute[i] == 0 ){
            cout << "Repeating number is : " <<array[i];
        }
        cout << endl;
        if(substitute[i] > 1){
            cout << "Missing number is : " <<array[i];
        }

    }

}




***********************************************


vector<int> find_missing_repeating(vector<int> array)
{
    int n = array.size() + 1;

    vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

    vector<int> ans;              // initializing the answer  array .

    for (int i = 0; i < array.size(); i++)
    {
        substitute[array[i]]++;
    }

    for (int i = 1; i <= array.size(); i++)
    {
        if (substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}


Time Complexity: O(N) + O(N) (as we are traversing 2 times )

Space Complexity: O(N) As we are making new substitute array
