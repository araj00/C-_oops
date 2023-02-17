#include<iostream>
using namespace std;

class base{
    public:
     
     virtual ~base(){
         cout<<"base class destructor is called"<<endl;
     }
};

class derived:public base{
    ~derived(){
        cout<<"derived class destructor is called"<<endl;
    }
};

int main(){

base *ptr = new derived;
delete ptr;
}