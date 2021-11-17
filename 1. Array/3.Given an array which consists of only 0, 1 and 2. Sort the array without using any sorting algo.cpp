/*
    link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
    logic: iterate mid and if mid==0 then swap with low and then low++, mid++
           if mid==2 then swap with high and then high--, mid
           else mid++ as it would be 1.
    variation: 2-pointer
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n){

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid++], arr[low++]);
        } else if(arr[mid]==1){
             arr[mid++];
        } else {
            swap(arr[mid], arr[high--]);
            /* why not mid++ ?
            ans: let's assume the one which with we are swapping is also 2 then after swapping in mid pos it will still be 2
                hence solution is don't increment the mid until and unless it is equal to 1.
            */
        }
    }

}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr[] = { 0,1,2,0,1,1,2,2,2,1,0,1,2};

    int n = sizeof(arr)/sizeof(int);

    sort012(arr, n);

    printArray(arr,n);

}
