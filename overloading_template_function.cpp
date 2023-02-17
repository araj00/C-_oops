#include<iostream>
using namespace std;


void func(int a){
    cout<<"calling the function"<<endl;
}

template<class t1>
void func(t1 a){
    cout<<"calling the templatised function "<<a<<endl;
}

int main(){

    func(4);// exact match takes the highest priority

    return 0;
}