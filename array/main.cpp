#include<iostream>
using namespace std;
int main(){
    int arr []={2,23,23,34,54,6};
     int n = sizeof(arr) / sizeof(arr[0]); 
   // cout<<arr[0];
   for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}