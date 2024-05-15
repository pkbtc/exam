#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    float realpart,img;
    float r1,r2,desc,d;
    cout<<"Enter the coffients fo the quradtic equation : ";
    cin>>a>>b>>c;
    desc =(b*b)-(4*a*c);
    d=2*a;
    if(desc>0){
        cout<<"roots are real and unequal"<<endl;
        r1=(-b+sqrt(desc))/d;
        r1=(-b-sqrt(desc))/d;
        cout<<"root 1 = "<<r1<<endl;
        cout<<"root 2 = "<<r2<<endl;

    }
   else if(desc==0){
        cout<<"roots are real and equal"<<endl;
        r1=-b/d;
        r2=r1;
        cout<<"root 1 = "<<r1<<endl;
        cout<<"root 2 = "<<r2<<endl;

    }
    else{
        cout<<"roots are imginary "<<endl;
        realpart=(-b)/d;
        img=sqrt(-desc)/d;
        cout<<"r1 = "<<realpart<<"+"<<img<<"i"<<endl;
        cout<<"r1 = "<<realpart<<"-"<<img<<"i"<<endl;

    }
    return 0;
    
    

}   