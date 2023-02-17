#include<iostream>
#include<stdexcept>
using namespace std;

class Quotient{

public:

void getquotient(){
    float num1,num2,result;
    cout<<"enter the num1 and num2"<<endl;
    cin>>num1>>num2;

    if(num2==0){

        throw runtime_error("enter non zero number");

    }

    else if(num1<0){
        throw logic_error("num1 value cannot be negative");
    }

    else if(num1>1000){
    
        throw invalid_argument("enter num1 value less than 1000");
    
    }

    else{

        result=num1/num2;
        cout<<result<<endl;
    
    }
}

};

int main(){

Quotient obj;
try{
obj.getquotient();
}

catch(runtime_error& re){

    cout<<re.what()<<endl;

}

catch(logic_error& le){

    cout<<le.what()<<endl;

}

catch(invalid_argument& ia){

    cout<<ia.what()<<endl;

}

catch(exception& e){

    cout<<"new errror"<<endl;

}
    return 0;
}