#include<iostream>
using namespace std;
void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        
    }
    if(count==2){
            cout<<"the number is prime";
        }
        else{
            cout<<"not prime";
        }
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    prime(number);
    return 0;
}