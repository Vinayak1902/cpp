#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void virtual fun()= 0;
    
};
class B:public A{
    public:
    void fun(){
        cout<<"B"<<endl;
    }
};
int main(){
    A* a = new B();
    return 0;
}