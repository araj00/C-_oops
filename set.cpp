#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){

    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);

    set<int>::iterator iter;

    iter = set1.begin();

    while(iter!=set1.end()){
        cout<<*iter++<<endl;
    }
    set1.erase(set1.find(3));

    iter = set1.begin();

    while(iter!=set1.end()){
        cout<<*iter++<<endl;
    }

    set<int> set2(set1);

    iter = set2.begin();

    while(iter!=set2.end()){
        cout<<*iter++<<endl;
    }

    set2.erase(set2.begin(),set2.find(4));
    iter = set2.begin();

    while(iter!=set2.end()){
        cout<<*iter++<<endl;
    }

    multiset<int,greater<int> > ms1;
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2);
    ms1.insert(3);
    ms1.insert(2);

    iter = ms1.begin();

    while(iter!=ms1.end()){
        cout<<*iter++<<endl;
    }

    ms1.erase(2);

    iter = ms1.begin();

    while(iter!=ms1.end()){
        cout<<*iter++<<endl;
    }

    
}