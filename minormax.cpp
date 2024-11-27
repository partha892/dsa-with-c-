#include<iostream>
using namespace std;

int minOfTwoNum(int a,int b){
if(a>b){
    return b;
}else{
    return a;
}
}
int maxOfTwoNum(int a,int b){
if(a<b){
    return b;
}else{
    return a;
}

}
int x;
int y;



int main(){
    cout<<"enter x value"<<endl;
    cin>>x;
    cout<<"enter y value"<<endl;
    cin>>y;
    cout<<"min of two num : "<<minOfTwoNum(x,y)<<endl;
  

      cout<<"max of two num : "<<maxOfTwoNum(x,y)<<endl;

    return 0;
}