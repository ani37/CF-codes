 #include <bits/stdc++.h>
using namespace std;

class Human{
public:
	Human(){
		cout << "constructor called "<< endl;

	}
	~Human(){
		cout << "Destructor called " << endl;
	}
};

int main(){
	// Human* anil = new Human();
	Human rahul;
	// use delete keyword to delete memory allocation.
	// delete anil; 
	return 0;
}

/*


Destructor is executed whenever object of its class goes out of scope
or whenever delete operator is applied to the pointer of object of class

*/