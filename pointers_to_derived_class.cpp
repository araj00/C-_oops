#include<iostream>
using namespace std;

class base{
    int base1=1;
    public:
     virtual void display(){
           cout<<"The value of base1 is "<<base1<<endl;
       }
};

class derived:public base{
    int derived=2;
    public:
        void display(){
            cout<<"The value of derived is "<<derived<<endl;
        }
};

int main(){

    base *ptr;
    base obj1;
    
    derived obj2;
    ptr = &obj2;  // will this throw error??🤔🤨🙄 It won't throw error
    ptr->display();  //if i dont write the virtual with display function then it will invoke the class base display function 
    return 0;
}