/*
Pass the value recieved in 
derived class constructor to the base class constructor

*/


#include <bits/stdc++.h>
using namespace std;


class Father{
protected:
	int height;
public:
	Father(int h){
		cout << "Base class constructor "<< endl;
		height = h;
	}
};

class Child : public Father{
public:
	Child(int x) : Father(x){
		cout << "derived class constructor"<< endl;
	}
	void display(){
		cout << height << endl;
	}

};
int main(){
	Child anil(6);
	// anil.Child(6);
	anil.display();
	return 0;
}

/*
OUTPUT

Base class constructor 
derived class constructor
6


*/