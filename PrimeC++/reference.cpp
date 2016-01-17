#include <vector>
#include<iostream>
using namespace std;
/* question 1 
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;;
    return 0;
}

#include<iostream>
using namespace std;
 
int fun(const int &x)
{
    return x;
}
int main()
{
    cout << fun(10);
    return 0;
}



#include<iostream>
using namespace std;
 
void swap(char * &str1, char * &str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
 
int main()
{
  char *str1 = "GEEKS";
  char *str2 = "FOR GEEKS";
  swap(str1, str2);
  cout<<"str1 is "<<str1<<endl;
  cout<<"str2 is "<<str2<<endl;
  return 0;
}


#include<iostream>
using namespace std;
 
int main()
{
   int x = 10;
   int *ptr = &x;
   int &*ptr1 = ptr;
}


#include<iostream>
using namespace std;
 
int &fun()
{
    int x = 10;
    return x;
}
int main()
{
	vector<int> vec(100000000, 1);
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    cout << fun() << endl;
    fun() = 30;
    fun() = 30;
    fun() = 30;
    fun() = 30;
    return 0;
}

*****/


#include<iostream>
using namespace std;
 
void fun(const int &i)
{
    cout << "fun(const int &) called ";
}
void fun(int &i)
{
    cout << "fun(int &) called " ;
}
int main()
{
    const int i = 10;
    fun(i);
    return 0;
}
