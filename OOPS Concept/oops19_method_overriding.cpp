/*
Function overriding

Constructor/destructor cannot be over-ridden.

In function overridding a superclass method and 
subclass method should be of the same name , same
return type and same parameter list. 

*/

#include <bits/stdc++.h>
using namespace std;

class Person {
public: 
	void display(){
		cout << " this is in person base class"<< endl;

	}
	
};

class Student : public Person{
public: 
	void display(){
		cout << "This is in Student derived class" << endl;
	}

};


int main(){
	Student anil;
	anil.display();
	return 0;
}

