#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 20;
    int sum = 0;

    while (i<=n)
    {
        if (i%2!=0)
        {
           cout<<i<<endl;
           sum += i;
        }
        
        
        i++;
    }
    

cout<<"total sum "<<sum;


    return 0 ;
}