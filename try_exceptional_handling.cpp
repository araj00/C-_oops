#include<iostream>
using namespace std;

void operation(){
    int num1,num2;
    cin>>num1>>num2;
    if(num2 == 0){
        throw(10);
    }

    else if(num1<0){
        throw (string)"the number 1 can not be a negative number";
    }
    else{
       cout<<num1/num2<<endl;
    }
}

int main(){

   try{
       operation();
   }

   catch(int x){
       cout<<"error: "<<x<<endl;
       cout<<"error , try to give the num2 value a positive and non-zero"<<endl;
       operation();
   }

   catch(string a){
       cout<<"error: "<<a<<endl;
       cout<<"error, try to give the number 1 which is greater than zero"<<endl;
       operation();
   }
    cout<<"after the error handling"<<endl;

    return 0;
}