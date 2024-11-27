#include<iostream>
using namespace std;

void passby( int x){
 x = x*2;
 cout<<"x is "<<x<<endl;
}
int main(){

    int x = 10;
    passby(x);
    cout<<x<<endl;


    return 0;
}