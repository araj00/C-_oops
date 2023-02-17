#include<iostream>
using namespace std;

class A{
    int a;

    public:
        A & getdata(int a){
            this->a = a;
            return *this;
        }

        void display(){
            cout<<"The value of a is "<<a;
        }
};

// this is a keyword which points to the object which invokes the member function

int main(){

    A b;
    b.getdata(1).display();
    // b.display();

    return 0;
}