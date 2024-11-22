#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n = 10;
    for(int i = 0; i<=n;i++){
        if(i%3==0){
            sum = sum +i;

        }

    }
    cout<<sum<<endl;

    return 0 ;
}