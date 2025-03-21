/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"Hello"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Hi"<<endl;
    }
};
class Derived: public Base1, public Base2{
    public:
    void greet(){
        // Base2::greet();
        greet(); // no output
    }
};
int main()
{
    Derived d;
    d.greet();
    return 0;
}