#include<iostream>
using namespace std;
int sumOfN(int n){
    int sum = 0;
for(int i = 0;i<=n;i++){
sum +=i;
}
return sum;
}


int main(){

cout<<sumOfN(10);
    return 0;
}