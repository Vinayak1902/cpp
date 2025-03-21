/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    Employee(int id,int salary){
        this->id = id;
        this->salary = salary;
    }
    void setId(int id){
        this->id = id;
    }
    void getId(){
        cout<<id<<endl;
    }
};
class Programmer: public Employee{
    string codingLan;
    public:
    void setCoding(string lang){
        codingLan = lang;
    }
    void getCoding(){
        cout<<codingLan<<endl;
    }
};
int main()
{
    
    Programmer harry;
    harry.setId(1);
    harry.getId();
    return 0;
}