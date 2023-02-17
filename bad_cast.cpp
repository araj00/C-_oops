#include<iostream>
#include<stdexcept>
#include<typeinfo>
using namespace std;

class bankaccount{

public:
    void printaccount(){
        cout<<"printing"<<endl;
    }

};

class savingaccount:public bankaccount{

};

int main(){

   bankaccount ba;
   ba.printaccount();

   savingaccount sa;
   
   bankaccount & ba1 = dynamic_cast<savingaccount &>(sa); 
   ba1.printaccount();

   try{

   ba1.printaccount();
   
   savingaccount& sa = dynamic_cast<savingaccount &>(ba);// we can not dynamic typecast the baseclass objects to the subclass objects

   }

   catch(bad_cast& bc){
       cout<<bc.what()<<endl;
   }

    return 0;
}