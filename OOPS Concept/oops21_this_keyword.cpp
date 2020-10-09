/*
This pointer

Every object in c++ has access to its own address
to a pointer called this pointer.

That can be used to point to the members and member
function of that object

*/

#include <bits/stdc++.h>
using namespace std;

class Person {
private:
	int age;
public: 
	void setage(int age){
		// if iage it will run fine but if
		// age then we need to use this operator.
		this->age = age;//age = age give garbage value.
		// another use of this pointer is above

	}
	void display(){
		cout << this->age << endl;
	}

};

int main(){
	Person anil;
	anil.setage(34);
	anil.display();
	return 0;
} 