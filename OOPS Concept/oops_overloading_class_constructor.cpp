/*
Constructor overloading is done by defining function same as class name with different parameters.
You cannot overload default constructor it will through error.
If you delete dafault constructor then you need to specify parameter each time object is created.
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
	Human(string iname){
		cout << "constructor with name as the parameter" << endl;
		age = 10;
		name = iname;
	}
	Human(int iage){
		cout << "constructor with age as the parameter" << endl;
		age = iage;
		name = "rahul";
	}
	Human(string iname, int iage){
		cout << "constructor with age and name as the parameter"<< endl;
		name = iname;
		age = iage;
	}
	void display(){
		cout << "name: " << name << " age: " << age << endl;

	}

};

int main(){
	Human rahul;
	rahul.display();

	Human andy("andy");
	andy.display();

	Human alex("alex", 25);
	alex.display();

	return 0;
}