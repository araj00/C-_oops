#include<iostream>
using namespace std;

int main(){

    int *ptr = new int[3];
    cin>>*ptr>>*(ptr+1)>>*(ptr+2);
    cout<<*(ptr)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    delete[] ptr;
    cout<<ptr[1];
    return 0;
}