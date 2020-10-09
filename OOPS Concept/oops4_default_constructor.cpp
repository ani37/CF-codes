#include <bits/stdc++.h>
using namespace std;

class Human{
private:
	string name;
	int age;
public:
	// Human(){
	// 	cout << "default constructor" << endl;
	// 	name = "noName";
	// 	age = 0;
	// }
	Human (string iname = "noName", int iage = 0){
		cout << "overloaded constructor" << endl;
		name = iname;
		age = iage;
	}

	void speakUp(){
		cout << name << endl << age << endl;
	}
};

int main(){
	Human anil;
	anil.speakUp();
	return 0;
}


/*
A overloaded constructor will be called with default parameter value
to work as an default constructor.
*/