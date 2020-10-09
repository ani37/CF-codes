#include <bits/stdc++.h>
using namespace std;

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

	static void humanCountfunction(){
		// Only static variable can be used inside the static function 
		cout << "There are " << humanCount << " peoples are in this program" << endl; 

	}
	// this method will be shared among all the objects of class.
};

int Human :: humanCount = 0;
// :: scope resolution operator



int main(){
	cout << Human :: humanCount << endl;
	Human anil;
	Human anjali;
	Human sandeep;
	Human rajesh;
	Human ::humanCountfunction();
	cout << Human :: humanCount << endl;

	// we can access static variable value without creating object
	// because it has class scope.
	return 0;
}




/*
static member function is a method or a function with static keyword;
Inside the static function we can only use static variables.
We use scope resolution symbol to call the static function

*/