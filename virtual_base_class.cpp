// virtual base class is used to inhibit the passing of derived base class from the derived class twice. 


#include<iostream>
using namespace std;

class student{
   protected:
           int roll_number;
   public:

      void setdata(int data){
          roll_number=data;
      }

      void getdata(){
          cout<<"The roll number is "<<roll_number<<endl;
      }
};

class test:virtual public student{
    protected:
        float maths,physics;
    public:
        void setmarks(float data1,float data2){
            maths=data1;
            physics=data2;
        }
        void getmarks(){
            cout<<"marks obtained in "<<maths<<endl;
            cout<<"marks obtained in "<<physics<<endl;
        }

};

class sports:virtual public student{
    protected:
      float score;
      public:
           void setscore(float sc){
               score = sc;
           }

           void print_score(){
               cout<<"Your pt score is "<<score<<endl;
           }

};

class result:public sports , public test{
      float total;
      public:
         void display(){
             total = maths + physics;
             getdata();
             getmarks();
             print_score();
             cout<<"Your total score is "<<total<<endl;
         }
};

int main(){

    result aman;
    aman.setdata(12);
    aman.setmarks(23,19.8);
    aman.setscore(29);
    aman.display();
    return 0;
}