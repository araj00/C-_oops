#include<iostream>
#include<vector>

using namespace std;

void printvec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    // pair<int,int>p;
    //p = make_pair(1,"aman");
    // cin>>p.first;
    // cout<<p.first<<endl;
    //if you have not initialized the second one in pair then it shows zero value or blank space.
    // cout<<p.second<<endl;

    // int array_1[]={1,2,4};
    // int array_2[]={2,3,5};
    // pair<int,int>p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={2,3};
    // p_array[2]={4,5};

    // for(int i=0;i<3;i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    
    vector<int> v(10,3);
    cout<<v.size()<<endl;
    v.push_back(10); //it appends the element at the last position
    v.push_back(12);
    v.push_back(2);
    printvec(v);
    v.pop_back();//it removes the element from the last position
    printvec(v);
     cout<<v.front()<<endl;//it extracts the element from the first position
     vector<int> v2={1,2,4,5};
     vector<int> v3={11,23,24,1};
     swap(v3,v2);
     printvec(v2);
     printvec(v3);
     cout<<v3.back()<<endl;//it extracts the element from the last position
     cout<<v3.back()<<endl;
     v3.insert(v3.begin()+2,12);
     printvec(v3);

     vector<int>::iterator iter;//iterator,it is just like an pointer but points to the objects of the container.
     iter = v.begin();
     while(iter!=v.end()){
        cout<<*iter++<<endl;

     }
    }

