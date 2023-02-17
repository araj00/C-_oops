#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    friend complex sumresult(complex , complex);
    void setdata(int a1,int b1){
        a = a1;
        b = b1;
    }
    void getdata(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex sumresult(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}


int main(){

    complex x,y,sum;
    x.setdata(3,1);
    x.getdata();
    y.setdata(1,5);
    y.getdata();
    sum = sumresult(x,y);
    sum.getdata();
    return 0;
}