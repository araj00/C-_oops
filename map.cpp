#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(){

    map<int ,int> m1;
    m1.insert(pair<int,int>(1,2)); // or m1.insert({1,2})
    m1.insert({1,2});//ignores due to same key value pair otherwise it would have just updated the value with key value '1'
    m1.insert({2,3});
    m1.insert({4,2});

    map<int,int>::iterator iter;
    iter = m1.begin();
    cout<<"printing the map values "<<endl;
    while(iter!=m1.end()){
        cout<<iter->first<<":"<<iter->second<<endl;
        iter++;
    }

    m1.erase(3);//since 3 is not a key in the map so it does not bring any affect to the map container

    cout<<"printing the map values after erasing"<<endl;
    iter = m1.begin();
    while(iter!=m1.end()){
        cout<<iter->first<<":"<<iter->second<<endl;
        iter++;
    }

    m1.erase(m1.begin(),m1.find(2));//it gives the range from where to the (last-1) position
    cout<<"printing the map values after erasing second time"<<endl;
    iter = m1.begin();
    while(iter!=m1.end()){
        cout<<iter->first<<":"<<iter->second<<endl;
        iter++;
    }

    //creating multimap

    multimap<int,int> m2(m1.begin(),m1.end()); // multimap is same as multiset which allows the duplicacy of the key values
    m2.insert({1,3});
    m2.insert({1,3});

    cout<<"printing the multimap values"<<endl;
    iter = m2.begin();
    while(iter!=m2.end()){
        cout<<iter->first<<":"<<iter->second<<endl;
        iter++;
    }

}