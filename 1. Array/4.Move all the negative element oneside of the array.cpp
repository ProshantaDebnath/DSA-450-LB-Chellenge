// Two pointer Approach
// Time Complexity: O(N)
// Auxiliary Space: O(1)


#include<iostream>

using namespace std;


void shiftall(int arr[], int left, int right){

    while(left<=right){
        if(arr[left] < 0 and arr[right] < 0){
            left ++;
        } else if(arr[left] > 0 and arr[right] < 0){
            int temp = arr[left];
            arr[left]= arr[right];
            arr[right] = temp;

            left ++;
            right --;
        } else if(arr[right] > 0 and arr[left] > 0){
            right --;
        } else{
            left ++;
            right --;
        }
    }

}

void display(int arr[], int right){

  for (int i=0;i<=right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main()
{
  int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
  int arr_size = sizeof(arr)/sizeof(arr[0]);

  // Function Call
  shiftall(arr,0,arr_size-1);
  display(arr,arr_size-1);
  return 0;
}