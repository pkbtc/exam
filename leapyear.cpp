#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"leap year";
    }
    else if (year%400==0){
        cout<<"leap year";
    }
    else if(year%100!=0){
        cout<<"not leap";
    }
    
}