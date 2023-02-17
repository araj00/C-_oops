#include<iostream>
using namespace std;

class quotient{

    int num1;
    float num2, result;

    public:
    void getquotient(){

     cout<<"enter the num1 and num 2"<<endl;
     cin>>num1>>num2;
     if(num1<0){
         throw(10);
     }

     else if(num2==0){
         throw (string) "num2 should not be equal to zero";
     }
     else{
        result=num1/num2;
        cout<<result<<endl;
     }
    }

};

int main(){

    quotient obj;

    try{
        obj.getquotient();
    }

    catch(int x){
        cout<<"error: "<<x<<endl;
        cout<<"enter the non negative value of num1"<<endl;
        obj.getquotient();
    }

    catch(string message){
        cout<<"error: "<<message<<endl;
    }
    cout<<"after exception handling"<<endl; 

    return 0;
}