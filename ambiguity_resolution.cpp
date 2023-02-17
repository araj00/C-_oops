#include<iostream>
using namespace std;

class grandparent{
    public:
           void haircolor(){
               cout<<"brown color\n";
           }
       
};

class parent{
    public :
          void haircolor(){
               cout<<"black color\n";
           }
};

class child:public parent,public grandparent{
    public:
          void haircolour(){
              parent::haircolor();// It clears that whenever haircolour is invoked it will be of parent's haircolor
          }
};

int main(){

    child aniket;
    aniket.haircolour();

    return 0;
}