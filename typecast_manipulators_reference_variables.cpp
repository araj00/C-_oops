#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a=9;
    float b=13.8;

    cout<<a+b<<endl;
    cout<<a+(int)b<<endl;

    cout<<"the a without manipulator "<<a<<endl;
    cout<<"the b without manipulator "<<b<<endl;
    cout<<"the a with manipulator "<<setw(4)<<a<<endl;
    cout<<"the b with manipulator "<<setw(4)<<b<<endl;

    // Reference variables👈🏽👈🏽👈🏽👈🏽👈🏽👈🏽 important

    float &y=b;
    cout<< y<<endl;
    cout<< b<<endl;
    // if i change the value of y then it will change the value of x also like a pointer
    y=12.4;
    cout<< y<<endl;
    cout<< b<<endl;


}