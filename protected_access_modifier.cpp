#include<iostream>
using namespace std;

/*for the protected member:-
                                    public declaration   private declaration  protected declaration
                        
                1.private members       not inherited        not inherited        not inherited
                2.public members         public              private              protected
                3.protected members     protected           private               protected        
*/

class base{
    protected:
    int a;
    private:
    int b;
    public:
        void getdata(){
             a=9;
             cout<<a<<endl;
         }
};

class derived: private base{
    public:
        void call(){
          getdata();
        }
};

int main(){

      derived aman;
      aman.call();
  
    return 0;
}