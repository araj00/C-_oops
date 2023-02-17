#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){

    list<int> l1;

    l1.push_back(12);
    l1.push_front(23);
    l1.push_back(21);

    list<int> l2;

    l2.push_front(1);
    l2.push_front(3);
    l2.push_front(34);

    l1.merge(l2);

    list<int>::iterator iter;

    iter = l1.begin();

    while(iter!=l1.end()){
        cout<<*iter++<<endl;
    }

}