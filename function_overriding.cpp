#include<iostream>
using namespace std;

class A{
    public:
    int a;

    void printdata(){
        cout<<"from A"<<endl;
        cout<<a<<endl;
    }

    void getdata(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
};

class B:public A{
int b;

    public:
void printdata(){
        cout<<"from B"<<endl;  // since both class have the same name methods("printdata()") but the preference will be given to the local class methods of which the object is.
        cout<<a<<endl;
    }

    void getdata(){
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
};

int main(){
    A a;
    a.getdata();
    a.printdata();
    B b;
    b.printdata();
    b.getdata();
    b.printdata();
    a.printdata();
    
    a = b;

    a.printdata();//now the value of a.a=b.a but the function will be invoked from the class A and not class B instead of equality also i.e a = b  🤔
    

    return 0;
}