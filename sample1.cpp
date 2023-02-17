#include<iostream>
using namespace std;

class parent{
    public:

    int basedata;
};

class child1:public parent{

    public:

    void setdata1(){
        basedata=100;
    }
};

class child2:public parent{
    public:

    void setdata2(){
        basedata=10;
    }
};

class grandchild:public child1,public child2{
    public:

    void setdata3(){
        child1::basedata=10001;
    }

    int getdata(){
        return child1::basedata;
    }

};

int main(){
    parent p;
    child1 c1;
    child2 c2;
    c1.setdata1();
    c2.setdata2();
    grandchild g1;
    g1.setdata2();
    cout<<g1.getdata()<<endl;
    g1.setdata3();
    cout<<g1.getdata()<<endl;
    g1.setdata2();

    cout<<g1.getdata()<<endl;
}