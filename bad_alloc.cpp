#include<iostream>
#include<stdexcept>
using namespace std;

int main(){

    int *ptr;

    try{
        ptr = new int[100000000+1];
    }

    catch(bad_alloc& ba){
        cout<<ba.what();
    }

    delete[] ptr;

    return 0;
}