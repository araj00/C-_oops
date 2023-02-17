#include<iostream>
using namespace std;
void swapreference(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a=3,b=4;
    swapreference(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

