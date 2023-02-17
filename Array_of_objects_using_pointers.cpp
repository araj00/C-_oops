#include<iostream>
using namespace std;

class pc_games{
    int price,year;

    public:
         void getdata(int a,int b){
             price = a;
             year = b;
         }
        
         void game_details(){
             cout<<"price of the game is "<<price<<endl;
             cout<<"year of launch "<<year<<endl;
         }
};

int main(){

    pc_games *ptr = new pc_games[2];
    int a,b;
    for(int i = 0 ;i<2;i++){
        cout<<"enter the price and the year of the "<<i<<"game"<<endl;
        cin>>a>>b;
        (ptr+i)->getdata(a,b);
    }
    for(int i = 0 ;i<2;i++){
        (ptr+i)->game_details();
    }

    return 0;
}