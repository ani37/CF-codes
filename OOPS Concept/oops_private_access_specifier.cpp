#include <bits/stdc++.h>
using namespace std;
// #include <fstream>
// #include <iostream>
// #include <stdio.h>
// #include <string>
// #define endl "/n"

class Human{
private:
	int age;
	int getage(){
		return age-5;
	}
public:
	void setAge(int x){
		// cout << getage() << endl;
		age = x;
	}
	void displayage(){
		cout << getage() << endl;
	}
};

int main(){
	Human anil;
	anil.setAge(25);
	anil.displayage();
	return 0;
}

/*
Public access specifier can be accessed anywhere outside the class definition
where-as private access specifier can only be accessed inside the class definition.

Private access specifier is normally used to hide the internal working or internal representation of data.	
*/