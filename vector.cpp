#include<iostream>
#include<vector>
using namespace std;

template<class t>
void display(vector<t> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        cout<<vec.at(i)<<" ";

    }
    cout<<endl;
}

int main(){

    vector<int> vec1;
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.push_back(1);
    vec1.push_back(0);
    vec1.push_back(2);

    // cout<<vec1.size()<<endl;
    // display(vec1);
    vector<int> ::iterator iter = vec1.begin();
    // insert member asks for an iterator
    // vec1.insert(iter+1,234);
    //above code inserts the value '234' at vector[1];
    // display(vec1);
    // vec1.pop_back();
    // display(vec1);
    // vec1.insert(iter +2,4,3);
    // display(vec1);

    vector<char> vec2;
    vec2.push_back('4');
    display(vec2);
    vector<char> vec3(vec2);
    display(vec3);

    vector<int>vec4(4,3);//create a vector with value 3 four times
    display(vec4);

    return 0;
}