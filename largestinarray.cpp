#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,2,43,60};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the largest int the array is "<<max;
    return 0;
}