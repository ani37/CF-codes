#include <bits/stdc++.h>
using namespace std;
// void display();
// int main(){
// 	display();
// 	display();
// 	display();
// 	display();
// 	return 0;
// }

// void display(){
// 	static int counter =0;
// 	cout << "display finction called " << ++counter << " times" << endl;
// }


/*
static variable wil be stored in heap and static int counter will not be executed 
or read by the compiler after next call.

*/


// lets see how to use static variable inside class

class Human{
public:
	static int humanCount;
	// *****************************
	// This variable will be shared between all the object of this class
	// this variable has class scope;
	// You can't define static member class inside class definition;
	// You have to define it outside the class before creating object
	
	Human(){
		humanCount++;
	}
	void humantotal(){
		cout << "There are " << humanCount << " peoples are in this program" << endl; 
	}
};

int Human :: humanCount = 0;
// :: scope resolution operator



int main(){
	cout << Human :: humanCount << endl;
	Human anil;
	Human anjali;
	Human sandeep;
	anil.humantotal();
	cout << Human :: humanCount << endl;

	// we can access static variable value without creating object
	// because it has class scope.
	return 0;
}
