#include<iostream>
using namespace std;

class base1{
    int data1;

    public:
         base1(int a){
            data1=a;
            cout<<"The constructor base 1 is called"<<endl;
         }
         void printbase1(){
             cout<<"The value of base 1 is "<<data1<<endl;
         }
         
};

class base2{
    int data2;

    public:
         base2(int a){
            data2=a;
            cout<<"The constructor base 2 is called"<<endl;
         }
         void printbase2(){
             cout<<"The value of base 2 is "<<data2<<endl;
         }
         
};

class derived: public base1,public base2{
    int derived1,derived2;
    public:
    derived(int b,int d,int a,int c):base1(a),base2(c){
           derived1=b;
           derived2=d;
           cout<<"The derived constructor is called"<<endl;
    }
    void printderived(){
        cout<<"The value of derived 1 is "<<derived1<<endl;
        cout<<"The value of derived 2 is "<<derived2<<endl;
    }
};

int main(){

    derived complex(1,2,3,4);
    complex.printbase1();
    complex.printbase2();
    complex.printderived();    

    return 0;
}