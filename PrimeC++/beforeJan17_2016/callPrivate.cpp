
#include<iostream>
using namespace std;
 
class Base {
public:
    virtual int fun(int i) { cout << "Base::fun(int i) called" << endl; }
};
 
class Derived: public Base {
private:
    int fun(int x)   { cout << "Derived::fun(int x) called" << endl; }
};
 
int main()
{
    //Derived *ptrD = new Derived;
    //ptrD->fun(10);
    Base *ptr = new Derived;
    ptr->fun(10);
    return 0;
}
