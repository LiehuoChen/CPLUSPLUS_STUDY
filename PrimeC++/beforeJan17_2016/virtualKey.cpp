#include <iostream>
using namespace std;
 
class A
{
	  int x;
	public:
	    void setX(int i) {x = i;}
		A(int x) : x(x) {}
		  void print() { cout << x; }
};
 
class B: virtual public A
{
	public:
		  B() : A(10)  {// setX(10); 
		  }
};
 
class C:  virtual public A  
{
	public:
		  C() : A(20)  { //setX(20); 
		  }
};
 
class D: public B, public C {
};
 
int main()
{
	    D d;
		d.print();
	    return 0;
}
