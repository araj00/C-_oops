#include<iostream>
using namespace std;

class group{
    static int count;
    public:
        group(){
            count++;
            cout<<"creating "<< count <<" object\n";
        }
        ~group(){
            cout<<"deleting the "<<count<<" object"<<endl;
            count--;
        }
};

int group::count=0;


int main(){

    cout<<"creating the new object\n";

    group gp1;
    {
     cout<<"entering the block"<<endl;
     group gp1,gp2;
     cout<<"exiting the block"<<endl;
    }

    return 0;
}