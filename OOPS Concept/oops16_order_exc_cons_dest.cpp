/*
ORDER OF EXECUTION OF CONSTRUCTOR AND DESTRUCTOR

How the constructor and destructor of base and derived class is used when we use 
inheritence



*/

#include <bits/stdc++.h>
using namespace std;

class Person{
public:
	Person(){
		cout << " constructor of person class " << endl;
	}
	~Person(){
		cout << " destructor of person class " << endl;
	}

};

class Student : public Person{
public:
	Student(){
		cout << " constructor of student class " << endl;

	}
	~Student(){
		cout << " destructor of student class " << endl;

	}
};

int main(){
	Student anil;
	return 0;
}