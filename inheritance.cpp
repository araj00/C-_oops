#include<iostream>
using namespace std;

class base{
    int salary;
    public:
    int id;
    int num;
        base(int data=0){
            id= data;
            salary = 43;
        }
        void setdata1();
        
};

void base::setdata1(){
            cout<<"The id is "<<id<<endl;
            cout<<"The salary is "<<salary<<endl;
        }

 /*by default visibility mode in inheritance is private
 members  of the constructor of the base class should be initialised in the base class only*/

class derived : private base {
    public:
    int languagecode;
        derived(int data=9){
            id = data;
            num = 10;
            languagecode = 9;
        }
        void setdata(){
            setdata1(); //why setdata1 is called here 🤨🤔❓❓ It is because setdata1 is privately derived
            cout<<id<<endl;
            cout<<languagecode<<endl;
            cout<<num<<endl;
        }
};

int main(){
    
    base aman(1),akash(3);
    aman.setdata1();
    derived ansh(11);
    ansh.setdata();
    return 0;
}