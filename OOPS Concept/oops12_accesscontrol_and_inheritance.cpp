/*
Public:
	same class , derived class, outside class

Protected:
	same class, derivied class

Private:
	same class

When we inherit a class it get access to all
the non private base class members of class accept constructor
destructor overloaded operator and friend functions
of base class.
*/

//********* Public Inheritance **************
// Using keyword public while inheriting the class.


#include <bits/stdc++.h>
using namespace std;

class Person{
protected:
	string name;
public:
	void setName(string iname){
		name = iname;
	}

};

// when we use keyword *public* all the public members of 
// base class will act as public member of derived class
// and all the protected member of base class will be 
// protected member of derived class
// private member in base class will not be available in 
// derived class
class Student : public Person{
public:
	void display(){cout << name << endl;}
};

int main(){
	Student anil;
	// anil.name = "kuchBhi"; will through an error as name is protected
	anil.setName("anil");
	anil.display();
	return 0;
}