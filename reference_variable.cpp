#include<iostream>
using namespace std;

int main(){

    int a =10;
    int &ref=a;

    cout<<ref<<endl;

    int &ref1 = a;
    ref1 = 11;
    cout<<a<<endl;
    cout<<ref;

    return 0;
}