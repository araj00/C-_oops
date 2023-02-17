#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;



int main(){

vector<int> myvector;

cout<<myvector.max_size()<<endl;

try{
    myvector.resize(myvector.max_size()+1);
}

catch(length_error& le){

  cout<<le.what()<<endl;
  cout<<"Reached maximum limit size of vector"<<endl;
}

catch(exception& e){
    cout<<"unknown error"<<endl;
}

    return 0;
}