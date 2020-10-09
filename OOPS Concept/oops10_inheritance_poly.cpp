#include <bits/stdc++.h>
using namespace std;

/*
Inheritance let us define one class in terms of other class.
If we want to declare class then instead of declaring
complete new class we can inherit one class property to the other.
Inhertance allow us to use features of one class in another class.
 Inherit members and member function in another function


subclass inherits from a base class.
here student is subclass or derived class
and person is base class or parent class or super class
*/

class Person{
public:
	string name;
	int age;
	void setName(string iname){ name = iname; }
	void setAge(int iage){ age = iage; }

};

class Student : public Person {
public:
	int id;
	void setId(int iid){ id = iid;}

	void introduce(){
		cout << name << " " << age << " " << id << endl; 
	}
};

int main(){
	Student anil;
	anil.setName("anil");
	anil.setAge(34);
	anil.setId(12345);
	anil.introduce();
	return 0;
}