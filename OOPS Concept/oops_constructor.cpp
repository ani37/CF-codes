/*Constructor is nothing but a special function or
a method which has no return type and same name of a class 

It is automatically called when you create a object of class oops_constructor

You can't call the constructor of  a class manually
It's automatically called when object of class is created.

Use:
	Since it is automatically called it is used to initiallize properties of a class.
Constructor need to be public.

If no constructor is defined then also program will run fine  its because 
default constructor is called with no statement inside.

*/
#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
	string name;
	int age;
public:
	Human(){
		name = "noname";
		age = 0;
		cout << "constructor is created when you create an object" << endl;
	}
	void display(){
		cout << name << endl << age << endl;
	}

	// ~Human();
	
};

int main(){
	Human anil;
	anil.display();
	return 0;
}