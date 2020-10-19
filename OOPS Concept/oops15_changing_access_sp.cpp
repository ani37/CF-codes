/*
by default the derived class will have the access to the base class
as per the base class
but sometimes we need to change the access level of members
of the class and we achieve this using 

access declaration, we can change the access level or the 
scope of the member of base class in the derived class. 
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
	// access declaration;
	using Person :: name;

	// change method;
	// using Person :: setName;

	void display(){
		cout << name << endl;
	}
	void studentsetName(string iname){
		setName(iname);
	}
};


int main(){
	Student anil;
	anil.name = "anil";
	
	// anil.setName("Rahul");

	// anil.setGstudentName("anil"); //This will through error.
	// anil.setGstudentName("anil");
	anil.display();
	return 0;
}

// learning Lad