#include<iostream>
using namespace std;

int main(){
    int n=345;
    int rem;
    int rev=0;
    int check =n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    if(check==rev){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}