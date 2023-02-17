#include<iostream>
#include<cmath>
using namespace std;

class simple_calculator{

    protected:
    int a,b;
    float c;

    public:
         void getdata(int data1, int data2){
             a = data1;
             b = data2;
         }
         void addition(){
             c = a+b;
             cout<<"the addition of two given numbers is "<<c<<endl;
         }
          void subtraction(){
             c = a-b;
             cout<<"the subtraction of two given numbers is "<<c<<endl;
         }
          void multiplication(){
             c = a*b;
             cout<<"the multiplication of two given numbers is "<<c<<endl;
         }
          void divison(){
             c = a/b;
             cout<<"the divison of two given numbers is "<<c<<endl;
         }
};

class scientific_calculator:public simple_calculator{
   public:
       
       void power(){
           c = pow(a,b);
           cout<<"The power of the given two numbers is "<<c<<endl;
       }

       void square(){
           c = sqrt(a*b);
            cout<<"The square root of the given two numbers is "<<c<<endl;
       }
};

class hybrid_calculator: public scientific_calculator{
    
};



int main(){

    hybrid_calculator aman;
    aman.getdata(12,3);
    aman.addition();
    aman.power();
    aman.square();

    return 0;
}