#include<iostream>
using namespace std;



int sum(int n){
    int reverce =0;
    while (n>0)
    {
        int last = n%10;
        reverce = reverce *10 +last;
        n/=10;
        
        
    }
    

    
return reverce;
}


int main(){

cout<<sum(12356);
    return 0;
}