#include<iostream>

using namespace std;

template<class t1,class t2>
float avgsum(t1 a,t2 b){

    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float result;
    result = avgsum(2,3.2f);
    cout<<result<<endl;
}