// rules for virtual function

/*
1. They cannot be static.
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.virtual function in base class might not be used 
5.if a virtual function is defined in the base class , there is no necessity of redefining it in the derived class
*/

#include<iostream>
using namespace std;

class cplus{
    protected:
       string topic;
    public:
       cplus(string a){
           topic = a;
       }
    //    virtual void display(){  
    //    }

       // to not use virtual function at any cost make the virtual class pure.
        virtual void display()=0; //this will make compulsory to all derived class to have a display function so that in any absence of the display function in the derived class will throw error instead using virtual display function
};

class cplusvid:public cplus{
    int num;
    public:
    cplusvid(string a,int c):cplus(a){
        num = c;
    }
    void display(){
        cout<<"The topic is "<<topic<<endl;
        cout<<"The number of videos is "<<num<<endl;

    }
};

class cplustext:public cplus{
    int num;
    public:
    cplustext(string a,int c):cplus(a){
        num = c;
    }
    void display(){
        cout<<"The topic is "<<topic<<endl;
        cout<<"The number of pages is "<<num<<endl;
    }
};

int main(){

    string text;
    int num;

    text = "virtual function";
    num = 74;

    cplusvid obj1(text,num);

    text = "virtual function";
    num = 23;

    cplustext obj2(text,num);

    cplus *ptr[2];

    ptr[0] = &obj1;
    ptr[1] = &obj2;

    ptr[0]->display();
    ptr[1]->display();


    return 0;
}