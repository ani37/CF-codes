/*
Calling method using base class type


*/
#include <bits/stdc++.h>
using namespace std;

class Person{
public:
	void display(){
		cout << "I am from person base class" << endl;
	}
};
class Student : public Person{
public: 
	void display(){
		cout << "I am from student derived class " << endl;
	}
};

void introme(Person p){
	p.display();
}

int main(){

	Student anil;
	anil.display();

	introme(anil);

	return 0;
}