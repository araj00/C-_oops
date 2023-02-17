#include<iostream>
using namespace std;

class quotient{

float num1,num2,result;

public:

void getquotient(){
    cout<<"enter the num1 and num2"<<endl;
    cin>>num1>>num2;
    if(num1<0){
        throw divbyzero(1001,"num1 can not be less than zero");
    }
    else if(num2==0){
        throw negdiv(1002,"division with negative number is not permissible in c++");
    }
    else{
        result=num1/num2;
        cout<<result<<endl;
    }
}

class divbyzero{
  int error;
   string message;

   public:

   divbyzero(int error,string message){
       this->error=error;
       this->message=message;
   }

   void showerror(){
     cout<<error<<endl;
     cout<<message<<endl;
   }
};

class negdiv{
int error;
   string message;

   public:

   negdiv(int error,string message){
       this->error=error;
       this->message=message;
   }

   void showerror(){
     cout<<error<<endl;
     cout<<message<<endl;
   }
};

};
int main(){

    quotient obj;

    try{
        obj.getquotient();
    }

    catch(quotient::divbyzero &z){
        z.showerror();
    }

    catch(quotient::negdiv &y){
        y.showerror();
    }

    cout<<"after exception handling"<<endl;

    return 0;
}