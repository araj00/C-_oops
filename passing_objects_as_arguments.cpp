#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    void setdata(int a1,int b1){
      a=a1;
      b=b1;
    }
    void getdata(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    void setdata_sum(complex o1,complex o2){
        cout<<"The complex number of the sum of two number is "<<o1.a+o2.a<<"+"<<o1.b+o2.b<<"i"<<endl;
    }
};

int main(){

    complex a,b,c;
    a.setdata(3,4);
    a.getdata();
    b.setdata(1,2);
    b.getdata();
    c.setdata_sum(a,b);
    return 0;
}