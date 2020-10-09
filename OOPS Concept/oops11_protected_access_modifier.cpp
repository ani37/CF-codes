#include <bits/stdc++.h>
using namespace std;

/*
*************  PROTECTED
This access specifier enables that member variable and member function
 is available to that 
class and subclass or derived class

Whereas private access specifier ensures that member variable and member function
is available to  superclass/base only.

public access specifier enable that variable and function is availabe anywhere in 
program.
*/

class Person {
protected:
	string name;
public:
	void setName(string iname){ name = iname;}
};

class Student : public Person {
public:
	void display(){
		cout << name << endl;
	}
};

int main(){
	// Person anil;

	// anil.name cant be accessed as variable is protected
	Student anil;
	anil.setName("anil");
	anil.display();
	return 0;
}