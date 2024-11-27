#include<iostream>
using namespace std;
int facto(int n){
    int fact = 1;;
for(int i = 1;i<=n;i++){
fact *=i;
}
return fact;
}


int main(){

cout<<facto(5);
    return 0;
}