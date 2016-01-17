
#include<iostream>

using namespace std;

class A

{

public:

virtual void display(int data = 10){

cout<< "A : " << data;

}

};

class B : public A

{

public:

void display(int data = 20){

cout<< "B : "<< data;

}

};

int main()

{

A *a = new B;

a->display();

}
/*
Expected Result: B : 20
Actual Result: B : 10
Explanation: Default argument value resolved at compile time but virtual function invocation is resolved at run time so default argument is used as 10 but function is called of class B.
usage: at [-q x] [-f file] [-m] time
       at -c job [job ...]
       at [-f file] -t [[CC]YY]MMDDhhmm[.SS]
       at -r job [job ...]
       at -l -q queuename
       at -l [job ...]
       atq [-q x] [-v]
       atrm job [job ...]
       batch [-f file] [-m]
	   ******/
