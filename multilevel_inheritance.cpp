#include<iostream>
using namespace std;

class student{
    protected:
         int roll_num;
    public:
        void getdata(int data){
            roll_num = data;
        }
        void setdata(){
            cout<<"The roll number is "<<roll_num<<endl;
        }
};

class subjects : public student{
   protected:
     int maths,physics;
   public:
     void getmarks(int data1, int data2){
         maths = data1;
         physics = data2;
     }
     void setsubject(){
         cout<<"The marks of the math is "<<maths<<endl;
         cout<<"The marks of the physics is "<<physics<<endl;
     }
};


class result: public subjects{
      public:
           void display(){
               cout<<"Your avg marks are "<<(float)(maths+physics)/2<<endl;
               setdata();
               setsubject();
           }

};

int main(){

    result aman;
    aman.getdata(1);
    aman.getmarks(20,25);
    aman.display();    

    return 0;
}