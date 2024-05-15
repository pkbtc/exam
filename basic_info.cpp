#include<iostream>
using namespace std;
class basic_info{
    char name[30];
    int rollno;
    char sex;
    public:
       void setData(){
        cout<<"enter the name";
        cin>>name;
        cout<<"roll";
        cin>>rollno;
        cout<<"sex(M OR F)";
        cin>>sex;

       }
       void getData(){
        cout<<"name"<<name<<endl;
        cout<<"age :" <<rollno<<endl;
        cout<<"sex"<<sex<<endl;


       }
};
class phsyical_fit:public basic_info{
    int hieght;
    int wiehgt;
    public:
        void set(){
            cin>>hieght;
            cin>>wiehgt;

        }
        void get(){
            cout<<hieght;
            cout<<wiehgt;

        }

};

int main(){
        phsyical_fit phy;
        phy.setData();
        phy.set();
        phy.getData();
        phy.get();
        return 0;
}
