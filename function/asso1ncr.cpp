#include<iostream>
using namespace std;



int facto(int n){
    int fact = 1;;
for(int i = 1;i<=n;i++){
fact *=i;
}
return fact;
}
int ncr(int n,int r){
int factoriofn =facto(n);
int factoriofr =facto(r);
int factoriofnmr =facto(n-r);
return factoriofn/(factoriofr*factoriofnmr);
}


int main(){
int n = 7;
int r = 3;
cout<<ncr(n,r);
    return 0;
}