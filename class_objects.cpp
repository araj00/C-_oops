#include<iostream>
#include<string>
using namespace std;

class food{
    int price;
    public:
    char name[10];

    void rate();
    void print();
};

void food::rate(){
    cout<<"Enter the price of the %s\n",name;
    cin>>price;
}

void food::print(){
  cout<<"Fruit name = "<<name<<endl;
  cout<<"Price = "<<price<<endl;
}

int main(){
    food fruit;
    sprintf(fruit.name,"%s","apple");
    fruit.rate();
    fruit.print();
    return 0;
}