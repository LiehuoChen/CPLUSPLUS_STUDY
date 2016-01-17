#include <iostream>
#include <typeinfo>


#include <iostream>
using namespace std;
 
class student
{
private:
    //const int roll;
  int roll;
public:
    // constructor
    student(int r):roll(r) {}
 
    // A const function that changes roll with the help of const_cast
    void fun() const
    {
        ( const_cast <student*> (this) )->roll = 5;
    }
 
    int getRoll()  { return roll; }
};
 
int main(void)
{
    student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;
 
    s.fun();
 
    cout << "New roll number: " << s.getRoll() << endl;
 
    return 0;
}
/***
#include <iostream>

using namespace std;
 
int main(void)
{
    int a1 = 40;
    const int* b1 = &a1;
    char* c1 = (char *)(b1);
    *c1 = 'A';
	cout << c1 << endl;
    return 0;
}
using namespace std;

int main(void) {
	int a1 = 40; 
	const volatile int *b1 = &a1;
	cout << "typeid of b1 " << typeid(b1).name() << endl;
	int *c1 = const_cast<int *>(b1);
	cout << "typeid of b1 " << typeid(c1).name() << endl;
	return 0;
}
***/
