#include<iostream>
using namespace std;



int sum(int n){
    int sunofndigit =0;
    while (n>0)
    {
        int last = n%10;
        n/=10;
        sunofndigit = sunofndigit+last;
        
    }
    

    
return sunofndigit;
}


int main(){

cout<<sum(12356);
    return 0;
}