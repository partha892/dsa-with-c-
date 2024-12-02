#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr []={2,23,23,34,54,-6};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    


   for(int i =0;i<size;i++){
    smallest = min(arr[i],smallest);
    largest = max(arr[i],largest);
   }

   cout<<smallest<<endl;
   cout<<largest<<endl;

    return 0;
}