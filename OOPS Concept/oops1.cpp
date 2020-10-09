#include <bits/stdc++.h>
using namespace std;

class Human {
public:
	string name;
	void introduce();
// public:
// 	string sex;
// 	void age();
};

void Human :: introduce(){
	cout << Human :: name << endl;
}


int main (){

	Human anil;
	anil.name = "anil";
	anil.introduce();

	return 0;
}