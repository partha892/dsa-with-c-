#include<iostream>
using namespace std;
int main(){
    int marks = 41;
    if (marks <=25){
       cout<<"you are fail YOUR GREAD \"D\"";
    }else if (marks>25&& marks<=40)
    {
      cout<<"you are pass YOUR GREAD \"C\"";
    }
    else if (marks>=41&&marks<=60)
    {
      cout<<"you are pass YOUR GREAD \"B\"";
    }else if (marks>=61&&marks<=80)
    {
      cout<<"you are pass YOUR GREAD \"A\"";
    }else if (marks>=81&&marks<=100)
    {
      cout<<"you are pass YOUR GREAD \"A+\"";
    }
    
    

    return 0;
}