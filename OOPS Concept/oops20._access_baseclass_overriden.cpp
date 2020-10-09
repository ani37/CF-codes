/*
Accessing base class method if method is overridden

It can be done using 
In main function
<object name>.<clas name> :: <overridden function name>();
 
In derived class
class name :: function name();
*/

#include <bits/stdc++.h>
using namespace std;

class Person{
public:
	void display(){
		cout << " Hi i am rahul and in base class " << endl;
	}
};

class Student : public Person{
public:
	void display(){
		cout << " Hi i am student rahul and i am in derived class" << endl;
// class name :: function name();
		Person :: display();
	}
};

int main(){

	Student anil;
// <object name>.<clas name> :: <overridden function name>();
	anil.Person :: display();
	anil.display();

	return 0;
}

