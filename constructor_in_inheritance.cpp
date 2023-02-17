#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){
        cout<<"default constructor"<<endl;
    }

    A(int a):a(a){
        cout<<"parameterized constructor"<<endl;
    }

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

   B(){
       cout<<"Class B default constructor"<<endl;
   }

   B(int b):b(b){
       cout<<"Class B parameterized constructor"<<endl;
   }

void printdata(){
        cout<<"from B"<<endl;  // since both class have the same name methods("printdata()") but the preference will be given to the local class methods of which the object is.
        cout<<b<<endl;
    }

    void getdata(){
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
};

int main(){

    B a(2); // a object is declared then the constructor from B and A is invoked where type of derived depends on the specification that whether it was given the argument or not while creating the derived object and for base class it is dependent on that how constructor of derived class is declared ; by default base class default constructor is invoked
    a.getdata();

    return 0;
}