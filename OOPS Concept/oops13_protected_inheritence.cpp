#include <bits/stdc++.h>
using namespace std;

class Person{
protected:
	string name;
public:
	void setName(string iname) {name = iname;}

};

/*
When we use public inheritence all the public and protected member of base class 
will act as public and protected members of derived class respectively.

when we use PROTECTED inheritence all the public and protected member of base class
will act as protected members of derived class.

*/

class Student : protected Person {
public:
	void display(){cout << name << endl;}
	void setStudentName(string iiname){
		setName(iiname);
	}
};


int main(){
	Student anil;
	// anil.setName("anil"); this will through error "'Person' is not an accessible base of 'Student'"
	anil.setStudentName("anil"); 
	anil.display(); 
	return 0;
}