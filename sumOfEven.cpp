#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n = 20;
    for(int i = 0; i<=n;i++){
        if(i%2==0){
            sum = sum +i;

        }

    }
    cout<<sum<<endl;

    return 0 ;
}