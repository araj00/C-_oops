#include<iostream>
#include<algorithm>
using namespace std;

void display(int * array){
    for(int i = 0 ; i<5;i++){
        cout<<*(array+i);
    }

}

// function objects is the function wrapped in the class so that it is available like an object in the class

int main(){

    int arr[] = {3,1,2,5,0};
    sort(arr,arr+4,greater<int>());//it excludes the last given element to be in the sort(_start,_end)
    display(arr);
    return 0;
}