#include<iostream>
#include<cstring>
using namespace std;

template <class t1,class t2>
class mobile{
    t1 price;
    t2 brand;

    public:
         void getbrand(t2 a){
             brand = a;
         }

         void pricedata(t1 b){
             price = b;
         }
         
         void display(){
             cout<<"The brandname of the mobile "<<brand<<endl;
             cout<<"The price of the mobile "<<price<<endl;
         }
};

//the attributes can be defined like below also
// template <class t1 ,class t2 >
// void mobile<t1,t2>::pricedata(t1 b){
//              price = b;
//          }

int main(){

    mobile<int,string>m1;
    m1.getbrand("nokia");
    m1.pricedata(12999);
    m1.display();
// we can parametrized the template with default custom datatypes the same way we did in the constructor
    return 0;
}
