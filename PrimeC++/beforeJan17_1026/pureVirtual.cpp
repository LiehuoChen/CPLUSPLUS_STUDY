
#include<iostream>
using namespace std;
/*** 
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
};
 
int main(void)
{
    Base *bp = new Derived();
    //Base *bpb = new Base();
    bp->show();
    return 0;
}
*****/
#include <iostream>
class Base
{
public:
    virtual ~Base()=0; // Pure virtual destructor
};
Base::~Base()
{
   std::cout << "Pure virtual destructor is called";
}
 
class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "~Derived() is executed\n";
    }
};
 
int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
