#include<iostream>
using namespace std;

class base{
    public:
      virtual  void show(){
        cout<<"in the base"<<endl;
      }
};
class derived:public base{
    public:
       virtual void show(){
        cout<<"in the derived"<<endl;
       }
};
int main(){
    derived d;
    base b;
    base *bptr;
    bptr=&d;

    bptr->show();
    bptr=&b;
    bptr->show();
    return 0;
}