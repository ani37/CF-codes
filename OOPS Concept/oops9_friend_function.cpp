#include <bits/stdc++.h>
using namespace std;


// If you don't specify and access specifier then by default 
// its gonna be private(by default);
class Human {
string name;
int age;

public:
	Human(string iname,  int iage){
		name = iname;
		age = iage;
	}
	void tellme(){
		cout << name << endl << age << endl;
	}
friend void display(Human man); //This is friend member of this class
// friend class classname; this will be the friend class of this class.
};

void display(Human man){
	cout << man.name << endl << man.age << endl;
}	

int main(){
	Human anil("anil", 25);
	display(anil); 

	return 0;
}

/*
friend function is used by using friend keyword 
this enable function(which is not a member of class) 
to access private member of class
by defining function definition inside the class.
*/