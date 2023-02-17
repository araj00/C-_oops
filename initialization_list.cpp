#include<iostream>
using namespace std;

class test{
    int a,b;

    public:   
         test(int data1,int data2) :  b(data2), a(data1){
             cout<<"constructor is called\n";
         }
         void display(){
             cout<<a<<endl;
             cout<<b<<endl;
             
         }
};

int main(){

    test me(5,3);
    me.display();
    

    return 0;
}