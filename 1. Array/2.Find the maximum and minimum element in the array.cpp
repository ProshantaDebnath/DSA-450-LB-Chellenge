#include<iostream>
#include<climits>

using namespace std;

int findMax(int arr[], int n){

    int Max = INT_MIN;

    for(int i = 0; i<n; i++){

        if(arr[i]>Max)
            Max = arr[i];
    }

    return Max;
}

int findMin(int arr[], int n){

    int Min = INT_MAX;

    for(int i = 0; i<n; i++){

        if(arr[i]<Min)
            Min = arr[i];
    }

    return Min;
}


int main(){

    int arr[] = { 5,6,11,13,1,75,16,18,85};

    int n = sizeof(arr)/sizeof(int);

    cout<< "Maximum element is : "<<findMax(arr, n);

    cout<< "\nMinimum element is : "<<findMin(arr, n);


}
