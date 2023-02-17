#include<iostream>
using namespace std;

class data;

class calculator{
    public:
    int add(int a,int b){
       return a+b;
    }
     int sumresult(data ,data);
};

class data{
    int a,b;
    friend int calculator::sumresult(data,data);
    public:
     void setdata(int x,int y){
         a=x;
         b=y;
     }
     void getdata(){
         cout<<a<<endl;
         cout<<b<<endl;
     }
};

 int calculator::sumresult(data o1,data o2){
        return (o1.a+o2.a) + (o1.b+o2.b);
    }

int main(){

    data p,q;

    p.setdata(2,3);
    p.getdata();

    q.setdata(3,2);
    q.getdata();

    calculator r;

     
    cout<<r.sumresult(p,q)<<endl;

    return 0;
}