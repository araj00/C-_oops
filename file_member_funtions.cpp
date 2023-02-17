#include<iostream>
#include<fstream>
using namespace std;

// there are 2 ways to open file :-
// 1.Using the constructor
// 2.Using the member function open() of the class

int main(){

    ofstream hout("sample.txt");
    // ****** OR **********
    /* ofstream hout;
    hout.open("sample.txt");     ➡➡➡➡➡👉🏽👉🏽👉🏽 by this method file is automatically closed */

    // cout<<"Enter your name"<<endl;
    string name;
    getline(cin,name);
    hout<<name;
    cout<<"Enter the text\n";
    getline(cin,name);
    hout<<name; 
    hout.close();

    // ifstream hin("sample.txt");
    // while(!(hin.eof())){
    // getline(hin,name);
    // cout<<name<<endl;}
    // return 0;
}