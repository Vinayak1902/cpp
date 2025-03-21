#include<bits/stdc++.h>
using namespace std;
class Number{
    
    public:
    int a;
    Number(){
        a=0;
    }
    Number(int a){
        this->a = a;
    }
    Number(Number &obj){
        a = obj.a;
    }
};
int main(){
    Number x(10);
    Number y(x); //copy constructor invoked
    Number  z = x; //copy constructor invoked
    Number z1;
    z1 = x; //copy constructor not invoked

    cout<<y.a<<endl;
    return 0;
}