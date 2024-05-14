#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
        complex(){

        }
        complex(int real,int img){
            this->real=real;
            this->img=img;
        }
        complex(int x){
            real=img=x;
        }
        complex operator+(complex c){
            complex temp;
            temp.real=real+c.real;
            temp.img=real+c.img;
            return temp;
            
        }
        void display(){
            cout<<real<<"+i"<<img<<endl;

        }
};
int main(){
    complex c1(10,20),c2(20),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
