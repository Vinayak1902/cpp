#include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"Hello"<<endl;
    }
};
class Derived1 : public virtual Base1{
};
class Derived2 : public virtual Base1{

};
class child : public Derived1, public Derived2{
    
};
int main()
{
    child c;
    c.greet();
    // c.greet(); // error: request for member 'greet' is ambiguous
    return 0;
}

// Explanation:
// only one copy of the data member and member function will be passed to the classes “B” and “C” which will be shared between all classes.
// data members and member functions of class “A” will be inherited twice in class “D” 