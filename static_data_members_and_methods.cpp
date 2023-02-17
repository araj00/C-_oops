#include<iostream>
using namespace std;

class employee{
    int id ;
    static int count ;

    public:
    void getdata();
    void setdata(int);
    static void getcount(){
        // cout<<id<<endl;  THIS WILL THROW ERROR
        cout<<"The count of the employee is "<<count<<endl;
    }
};

void employee::setdata(int a){
    id =a;
}

void employee::getdata(){
  cout<<"The id of the employee is "<<id<<endl;
  count++;
}

int employee::count=0; //This line means count variable is the class member and not the object; if static variable is not declared like this then it will throw error

int main(){

    employee harry,aman;
    harry.setdata(101);
    harry.getdata();
    employee::getcount();
    aman.setdata(103);
    aman.getdata();
    employee::getcount();
    aman.getcount();
    
   
    return 0;
}