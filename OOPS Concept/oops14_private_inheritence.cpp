/*
public and protected member of base class will act as 
private member of derived class.
this means it will not be accessible to derived class not to anyother class 
which is derived using this class.
*/ 


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

class Student : private Person{
public:
	void display(){
		cout << name << endl;
	}
	void studentsetName(string iname){
		setName(iname);
	}
};

// If we dont specify any access specifier then act as private inheritence.

class Gstudent : public Student{
public:
	void setGstudentName(string iname){
		// name = iname;
		studentsetName(iname);
	}
};

int main(){
	Gstudent anil;
	// anil.setGstudentName("anil"); //This will through error.
	anil.setGstudentName("anil");
	anil.display();
	return 0;
}

// learning Lad