#include <iostream>

using namespace std;

int local = 80;

int main()
{
    // int local = 90;
    // cout << local << endl;

    // here , :: means to specify that local is a global variable but not a local variable.

    // cout << ::local << endl;
 
    float a=1.09f;
    double b=1.09l;

    // here 1.09f and 1.09l declares that they are different data types otherwise when a decimal number is given in a function as 
    // an argument then it takes it as a double by default

    cout<<"float= "<<a<<" "<<"double= "<<b<<endl;
    cout<<local+a;
    
}